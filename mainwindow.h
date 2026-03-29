#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "csvreader.h"
#include "searcher.h"
#include "csvwriter.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void loadBooks();

private slots:
    void on_pushButton_clicked();

    void on_addBook_clicked();

    void on_addMagazine_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<Book*> books;
    void textToDisp(const std::vector<Book*> books);
};
#endif // MAINWINDOW_H
