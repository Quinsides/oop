#ifndef SEARCHER_H
#define SEARCHER_H
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "book.h"

class searcher
{
public:
    searcher();
    std::vector<Book*> searchBook (const std::vector<Book*>, const std::string&);
};

#endif // SEARCHER_H
