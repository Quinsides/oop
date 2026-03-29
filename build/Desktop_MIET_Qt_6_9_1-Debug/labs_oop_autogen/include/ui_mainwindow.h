/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchTitle;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *addTitle;
    QLineEdit *addAuthor;
    QLineEdit *addYear;
    QLineEdit *addPrice;
    QPushButton *addBook;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *addTimes;
    QLineEdit *addIssues;
    QPushButton *addMagazine;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(629, 463);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchTitle = new QLineEdit(centralwidget);
        searchTitle->setObjectName("searchTitle");

        horizontalLayout->addWidget(searchTitle);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        addTitle = new QLineEdit(centralwidget);
        addTitle->setObjectName("addTitle");
        addTitle->setMaximumSize(QSize(1500, 16777215));

        horizontalLayout_2->addWidget(addTitle);

        addAuthor = new QLineEdit(centralwidget);
        addAuthor->setObjectName("addAuthor");
        addAuthor->setMaximumSize(QSize(1500, 16777215));

        horizontalLayout_2->addWidget(addAuthor);

        addYear = new QLineEdit(centralwidget);
        addYear->setObjectName("addYear");
        addYear->setMaximumSize(QSize(1500, 24));

        horizontalLayout_2->addWidget(addYear);

        addPrice = new QLineEdit(centralwidget);
        addPrice->setObjectName("addPrice");
        addPrice->setMaximumSize(QSize(1500, 24));

        horizontalLayout_2->addWidget(addPrice);

        addBook = new QPushButton(centralwidget);
        addBook->setObjectName("addBook");
        addBook->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_2->addWidget(addBook);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        addTimes = new QLineEdit(centralwidget);
        addTimes->setObjectName("addTimes");

        horizontalLayout_3->addWidget(addTimes);

        addIssues = new QLineEdit(centralwidget);
        addIssues->setObjectName("addIssues");

        horizontalLayout_3->addWidget(addIssues);

        addMagazine = new QPushButton(centralwidget);
        addMagazine->setObjectName("addMagazine");

        horizontalLayout_3->addWidget(addMagazine);


        verticalLayout->addLayout(horizontalLayout_3);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 629, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        addYear->setInputMask(QString());
        addYear->setText(QString());
        addBook->setText(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\270\320\263\320\260", nullptr));
        addMagazine->setText(QCoreApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\245\321\200\320\260\320\275\320\270\320\273\320\270\321\211\320\265 \320\272\320\275\320\270\320\263", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
