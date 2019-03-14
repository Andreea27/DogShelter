/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuClass
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *administratorButton;
    QPushButton *userButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuClass)
    {
        if (MenuClass->objectName().isEmpty())
            MenuClass->setObjectName(QStringLiteral("MenuClass"));
        MenuClass->resize(585, 363);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(16);
        MenuClass->setFont(font);
        centralwidget = new QWidget(MenuClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        administratorButton = new QPushButton(centralwidget);
        administratorButton->setObjectName(QStringLiteral("administratorButton"));

        verticalLayout->addWidget(administratorButton);

        userButton = new QPushButton(centralwidget);
        userButton->setObjectName(QStringLiteral("userButton"));

        verticalLayout->addWidget(userButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MenuClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 21));
        MenuClass->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MenuClass->setStatusBar(statusbar);

        retranslateUi(MenuClass);

        QMetaObject::connectSlotsByName(MenuClass);
    } // setupUi

    void retranslateUi(QMainWindow *MenuClass)
    {
        MenuClass->setWindowTitle(QApplication::translate("MenuClass", "MainWindow", nullptr));
        administratorButton->setText(QApplication::translate("MenuClass", "Administrator", nullptr));
        userButton->setText(QApplication::translate("MenuClass", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuClass: public Ui_MenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
