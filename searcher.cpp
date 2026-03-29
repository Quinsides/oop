#include "searcher.h"

searcher::searcher() {}

std::vector<Book*> searcher::searchBook (const std::vector<Book*> books, const std::string& title) {
    std::vector<Book*> searchBooks;
    for (const auto& b : books){
        if (b->title().find(title) != std::string::npos){
            searchBooks.push_back(b);
        }
    }
    return searchBooks;
}
