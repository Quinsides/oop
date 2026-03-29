#ifndef CSVREADER_H
#define CSVREADER_H
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "book.h"

class csvReader
{
public:
    csvReader();

    void open(const std::string&);
    bool is_open();
    std::vector<Book*> readAll();

private:
    std::fstream fin;
};

#endif // CSVREADER_H
