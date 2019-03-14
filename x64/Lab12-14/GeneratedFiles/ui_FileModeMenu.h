/********************************************************************************
** Form generated from reading UI file 'FileModeMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEMODEMENU_H
#define UI_FILEMODEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileModeMenuClass
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QPushButton *CSVButton;
    QPushButton *HTMLButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FileModeMenuClass)
    {
        if (FileModeMenuClass->objectName().isEmpty())
            FileModeMenuClass->setObjectName(QStringLiteral("FileModeMenuClass"));
        FileModeMenuClass->resize(101, 119);
        centralwidget = new QWidget(FileModeMenuClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        CSVButton = new QPushButton(centralwidget);
        CSVButton->setObjectName(QStringLiteral("CSVButton"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(11);
        CSVButton->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, CSVButton);

        HTMLButton = new QPushButton(centralwidget);
        HTMLButton->setObjectName(QStringLiteral("HTMLButton"));
        HTMLButton->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, HTMLButton);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        FileModeMenuClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FileModeMenuClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 101, 21));
        FileModeMenuClass->setMenuBar(menubar);
        statusbar = new QStatusBar(FileModeMenuClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FileModeMenuClass->setStatusBar(statusbar);

        retranslateUi(FileModeMenuClass);

        QMetaObject::connectSlotsByName(FileModeMenuClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileModeMenuClass)
    {
        FileModeMenuClass->setWindowTitle(QApplication::translate("FileModeMenuClass", "MainWindow", nullptr));
        CSVButton->setText(QApplication::translate("FileModeMenuClass", "CSV", nullptr));
        HTMLButton->setText(QApplication::translate("FileModeMenuClass", "HTML", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileModeMenuClass: public Ui_FileModeMenuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEMODEMENU_H
