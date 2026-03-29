#ifndef CSVWRITER_H
#define CSVWRITER_H
#include <string>
#include <fstream>
#include <vector>
#include "book.h"

class csvWriter
{
public:
    csvWriter();
    void addBook(const std::string&, const Book&);
    void addMagazine(const std::string& filename, const Magazine& magazine);
};

#endif // CSVWRITER_H
