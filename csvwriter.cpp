#include "csvwriter.h"

csvWriter::csvWriter() {}

void csvWriter::addBook(const std::string& filename, const Book& book){
    std::ofstream fout;
    fout.open(filename, std::ios::app);
    std::string addLine = "\n" + book.title() + ';' +
                          book.author() + ';' +
                          std::to_string(book.year()) + ';' +
                          std::to_string(book.price()) + ';';
    fout << addLine;
    fout.close();
}

void csvWriter::addMagazine(const std::string& filename, const Magazine& magazine){
    std::ofstream fout;
    fout.open(filename, std::ios::app);
    std::string addLine = "\n" + magazine.title() + ';' +
                          magazine.author() + ';' +
                          std::to_string(magazine.year()) + ';' +
                          std::to_string(magazine.price()) + ';' +
                          std::to_string(magazine.times()) + ';' +
                          std::to_string(magazine.issues()) + ';';
    fout << addLine;
    fout.close();
}
