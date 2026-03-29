#include "csvreader.h"

csvReader::csvReader() {}

void csvReader::open(const std::string& filename){
    fin.open(filename);
}

bool csvReader::is_open() {
    return fin.is_open();
}

std::vector<Book*> csvReader::readAll(){
    std::vector<Book*> books;
    std::string line;
    while (std::getline(fin, line)){
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string vrem;
        std::string values[5];
        int count = 0;

        while (std::getline(ss, vrem, ';') && count < 5) {

            size_t first = vrem.find_first_not_of(" \t");
            size_t last = vrem.find_last_not_of(" \t");
            if (first != std::string::npos) {
                values[count] = vrem.substr(first, last - first + 1);
            } else {
                values[count] = "";
            }
            count++;
        }

        if (count >= 4) {
            if (count >= 6 && !values[4].empty() && !values[5].empty()) {
                Magazine* m = new Magazine(
                    values[0],
                    values[1],
                    std::stoi(values[2]),
                    std::stod(values[3]),
                    std::stoi(values[4]),
                    std::stoi(values[5])
                    );
                books.push_back(m);
            } else {
                Book* b = new Book(
                    values[0],
                    values[1],
                    std::stoi(values[2]),
                    std::stod(values[3])
                    );
                books.push_back(b);
            }
        }
    }
    return books;
}
