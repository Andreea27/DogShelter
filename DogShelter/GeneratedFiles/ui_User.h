/********************************************************************************
** Form generated from reading UI file 'User.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserClass
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *dogsList;
    QFormLayout *formLayout_6;
    QFormLayout *formLayout_3;
    QLabel *ageLabel;
    QLineEdit *ageEdit;
    QFormLayout *formLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QFormLayout *formLayout;
    QLineEdit *breedEdit;
    QLabel *breedLabel;
    QFormLayout *formLayout_4;
    QLabel *weightLabel;
    QLineEdit *weightEdit;
    QFormLayout *formLayout_5;
    QLabel *photoLabel;
    QLineEdit *photoEdit;
    QVBoxLayout *verticalLayout_3;
    QPushButton *adoptButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *filterButton;
    QFormLayout *formLayout_9;
    QFormLayout *formLayout_7;
    QLabel *breedFilterLabel;
    QLineEdit *breedFilterEdit;
    QFormLayout *formLayout_8;
    QLabel *ageFilterLabel;
    QLineEdit *ageFilterEdit;
    QPushButton *saveButton;
    QPushButton *openFileButton;
    QListWidget *adoptionList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserClass)
    {
        if (UserClass->objectName().isEmpty())
            UserClass->setObjectName(QStringLiteral("UserClass"));
        UserClass->resize(757, 539);
        centralwidget = new QWidget(UserClass);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dogsList = new QListWidget(centralwidget);
        dogsList->setObjectName(QStringLiteral("dogsList"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        dogsList->setFont(font);

        verticalLayout->addWidget(dogsList);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        ageLabel = new QLabel(centralwidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(11);
        ageLabel->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, ageLabel);

        ageEdit = new QLineEdit(centralwidget);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));
        ageEdit->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ageEdit);


        formLayout_6->setLayout(2, QFormLayout::SpanningRole, formLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nameEdit);


        formLayout_6->setLayout(1, QFormLayout::SpanningRole, formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        breedEdit = new QLineEdit(centralwidget);
        breedEdit->setObjectName(QStringLiteral("breedEdit"));
        breedEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, breedEdit);

        breedLabel = new QLabel(centralwidget);
        breedLabel->setObjectName(QStringLiteral("breedLabel"));
        breedLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, breedLabel);


        formLayout_6->setLayout(0, QFormLayout::SpanningRole, formLayout);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName(QStringLiteral("weightLabel"));
        weightLabel->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, weightLabel);

        weightEdit = new QLineEdit(centralwidget);
        weightEdit->setObjectName(QStringLiteral("weightEdit"));
        weightEdit->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, weightEdit);


        formLayout_6->setLayout(3, QFormLayout::SpanningRole, formLayout_4);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        photoLabel = new QLabel(centralwidget);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));
        photoLabel->setFont(font1);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, photoLabel);

        photoEdit = new QLineEdit(centralwidget);
        photoEdit->setObjectName(QStringLiteral("photoEdit"));
        photoEdit->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, photoEdit);


        formLayout_6->setLayout(4, QFormLayout::SpanningRole, formLayout_5);


        verticalLayout->addLayout(formLayout_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        adoptButton = new QPushButton(centralwidget);
        adoptButton->setObjectName(QStringLiteral("adoptButton"));
        adoptButton->setFont(font1);

        verticalLayout_3->addWidget(adoptButton);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        filterButton = new QPushButton(centralwidget);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setFont(font1);

        verticalLayout_2->addWidget(filterButton);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        breedFilterLabel = new QLabel(centralwidget);
        breedFilterLabel->setObjectName(QStringLiteral("breedFilterLabel"));
        breedFilterLabel->setFont(font1);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, breedFilterLabel);

        breedFilterEdit = new QLineEdit(centralwidget);
        breedFilterEdit->setObjectName(QStringLiteral("breedFilterEdit"));
        breedFilterEdit->setFont(font);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, breedFilterEdit);


        formLayout_9->setLayout(0, QFormLayout::LabelRole, formLayout_7);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        ageFilterLabel = new QLabel(centralwidget);
        ageFilterLabel->setObjectName(QStringLiteral("ageFilterLabel"));
        ageFilterLabel->setFont(font1);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, ageFilterLabel);

        ageFilterEdit = new QLineEdit(centralwidget);
        ageFilterEdit->setObjectName(QStringLiteral("ageFilterEdit"));
        ageFilterEdit->setFont(font);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, ageFilterEdit);


        formLayout_9->setLayout(1, QFormLayout::LabelRole, formLayout_8);


        verticalLayout_2->addLayout(formLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setFont(font1);

        verticalLayout_3->addWidget(saveButton);

        openFileButton = new QPushButton(centralwidget);
        openFileButton->setObjectName(QStringLiteral("openFileButton"));
        openFileButton->setFont(font1);

        verticalLayout_3->addWidget(openFileButton);


        horizontalLayout->addLayout(verticalLayout_3);

        adoptionList = new QListWidget(centralwidget);
        adoptionList->setObjectName(QStringLiteral("adoptionList"));
        adoptionList->setFont(font);

        horizontalLayout->addWidget(adoptionList);

        UserClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserClass);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 757, 21));
        UserClass->setMenuBar(menubar);
        statusbar = new QStatusBar(UserClass);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserClass->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        ageLabel->setBuddy(ageEdit);
        nameLabel->setBuddy(nameEdit);
        breedLabel->setBuddy(breedEdit);
        weightLabel->setBuddy(weightEdit);
        photoLabel->setBuddy(photoEdit);
        breedFilterLabel->setBuddy(breedFilterEdit);
        ageFilterLabel->setBuddy(ageFilterEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(UserClass);

        QMetaObject::connectSlotsByName(UserClass);
    } // setupUi

    void retranslateUi(QMainWindow *UserClass)
    {
        UserClass->setWindowTitle(QApplication::translate("UserClass", "MainWindow", nullptr));
        ageLabel->setText(QApplication::translate("UserClass", "Age:", nullptr));
        nameLabel->setText(QApplication::translate("UserClass", "Name:", nullptr));
        breedLabel->setText(QApplication::translate("UserClass", "Breed:", nullptr));
        weightLabel->setText(QApplication::translate("UserClass", "Weight:", nullptr));
        photoLabel->setText(QApplication::translate("UserClass", "Link:", nullptr));
        adoptButton->setText(QApplication::translate("UserClass", " --Adopt-->", nullptr));
        filterButton->setText(QApplication::translate("UserClass", "Filter", nullptr));
        breedFilterLabel->setText(QApplication::translate("UserClass", "Breed:", nullptr));
        ageFilterLabel->setText(QApplication::translate("UserClass", "Age:", nullptr));
        saveButton->setText(QApplication::translate("UserClass", "Save", nullptr));
        openFileButton->setText(QApplication::translate("UserClass", "Open File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserClass: public Ui_UserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
