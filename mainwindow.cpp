#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "book.h"
#include <sstream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadBooks();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::textToDisp(const std::vector<Book*> books){
    int m = books.size();
    if (m==4){
        for (const auto& b : books){
            QString line = QString::fromStdString(b->title()) + '\t' +
                           QString::fromStdString(b->author()) + '\t' +
                           QString::number(b->year()) + '\t' +
                           QString::number(b->price());
            ui->textBrowser->append(line);
        }
    } else {
        for (const auto& b : books){
            QString line = QString::fromStdString(b->title()) + '\t' +
                           QString::fromStdString(b->author()) + '\t' +
                           QString::number(b->year()) + '\t' +
                           QString::number(b->price()) + '\t' +
                           QString::number(b->times()) + '\t' +
                           QString::number(b->issues());

            ui->textBrowser->append(line);
        }
    }


}

void MainWindow::loadBooks(){
    ui->textBrowser->clear();
    csvReader csv;
    csv.open("books.csv");
    if (csv.is_open()) {
        books = csv.readAll();
    }

    std::sort(books.begin(), books.end(), [](const Book* a, const Book* b){
        return a->price() < b->price();
    });

    textToDisp(books);
}



void MainWindow::on_pushButton_clicked()
{
    ui->textBrowser->clear();
    searcher s;
    QString stitle = ui->searchTitle->text();
    std::vector<Book*> sbooks = s.searchBook(books, stitle.toStdString());

    textToDisp(sbooks);
}


void MainWindow::on_addBook_clicked()
{
    Book newBook(ui->addTitle->text().toStdString(),
                 ui->addAuthor->text().toStdString(),
                 ui->addYear->text().toInt(),
                 ui->addPrice->text().toInt());
    csvWriter writeBook;
    writeBook.addBook("books.csv", newBook);
    loadBooks();
    ui->addTitle->clear();
    ui->addAuthor->clear();
    ui->addYear->clear();
    ui->addPrice->clear();
}


void MainWindow::on_addMagazine_clicked()
{
    Magazine newMagazine(ui->addTitle->text().toStdString(),
                         ui->addAuthor->text().toStdString(),
                         ui->addYear->text().toInt(),
                         ui->addPrice->text().toInt(),
                         ui->addTimes->text().toInt(),
                         ui->addIssues->text().toInt());
    csvWriter writeMagazine;
    writeMagazine.addMagazine("books.csv", newMagazine);
    loadBooks();
    ui->addTitle->clear();
    ui->addAuthor->clear();
    ui->addYear->clear();
    ui->addPrice->clear();
    ui->addTimes->clear();
    ui->addIssues->clear();
}

