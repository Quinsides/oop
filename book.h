#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <QString>

class Book{
private:
    std::string title_;
    std::string author_;
    int year_;
    int price_;

public:
    Book() = default;

    virtual ~Book() = default;

    Book(const std::string& title, const std::string& author, const int& year, const int& price):
        title_(title), author_(author), year_(year), price_(price) {}

    void setTitle(const std::string& title){
        title_ = title;
    }

    void setAuthor(const std::string& author){
        author_ = author;
    }

    void setYear(const int year){
        year_ = year;
    }

    void setPrice(const int price){
        price_ = price;
    }

    virtual std::string title() const{
        return title_;
    }
    std::string author() const{
        return author_;
    }
    int year() const{
        return year_;
    }
    int price() const{
        return price_;
    }
};

class Magazine : public Book{
private:
    int times_;
    int issues_;
public:
    Magazine() = default;

    Magazine(const std::string& title, const std::string& author, const int& year, const int& price, const int& times, const int& issues):
        Book(title, author, year, price), times_(times), issues_(issues) {}

    void setTimes(const int& times){
        times_ = times;
    }

    void setIssues(const int& issues){
        issues_ = issues;
    }

    int times() const{
        return times_;
    }

    int issues() const{
        return issues_;
    }

    virtual std::string title() const override{
        std::string tit = "Журнал " + Book::title();
        return tit;
    }
};

#endif // BOOK_H
