/********************************************************************************
** Form generated from reading UI file 'Lab1214.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1214_H
#define UI_LAB1214_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab1214Class
{
public:
    QWidget *centralWidget;
    QListWidget *dogsList;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *breedLabel;
    QLineEdit *breedEdit;
    QFormLayout *formLayout_2;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QFormLayout *formLayout_3;
    QLabel *ageLabel;
    QLineEdit *ageEdit;
    QFormLayout *formLayout_4;
    QLabel *weightLagel;
    QLineEdit *weightEdit;
    QFormLayout *formLayout_5;
    QLabel *photoLabel;
    QLineEdit *photoEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addDogButton;
    QPushButton *removeDogButton;
    QPushButton *filterDogButton;
    QFormLayout *formLayout_6;
    QLabel *weightFilterLabel;
    QLineEdit *weightFilterEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Lab1214Class)
    {
        if (Lab1214Class->objectName().isEmpty())
            Lab1214Class->setObjectName(QStringLiteral("Lab1214Class"));
        Lab1214Class->resize(603, 444);
        centralWidget = new QWidget(Lab1214Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        dogsList = new QListWidget(centralWidget);
        dogsList->setObjectName(QStringLiteral("dogsList"));
        dogsList->setGeometry(QRect(9, 9, 250, 373));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(266, 10, 329, 222));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        breedLabel = new QLabel(layoutWidget);
        breedLabel->setObjectName(QStringLiteral("breedLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        breedLabel->setFont(font);
        breedLabel->setTextFormat(Qt::AutoText);
        breedLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, breedLabel);

        breedEdit = new QLineEdit(layoutWidget);
        breedEdit->setObjectName(QStringLiteral("breedEdit"));
        breedEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, breedEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nameEdit);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        ageLabel = new QLabel(layoutWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, ageLabel);

        ageEdit = new QLineEdit(layoutWidget);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));
        ageEdit->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ageEdit);


        gridLayout->addLayout(formLayout_3, 2, 0, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        weightLagel = new QLabel(layoutWidget);
        weightLagel->setObjectName(QStringLiteral("weightLagel"));
        weightLagel->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, weightLagel);

        weightEdit = new QLineEdit(layoutWidget);
        weightEdit->setObjectName(QStringLiteral("weightEdit"));
        weightEdit->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, weightEdit);


        gridLayout->addLayout(formLayout_4, 3, 0, 1, 1);

        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        photoLabel = new QLabel(layoutWidget);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));
        photoLabel->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, photoLabel);

        photoEdit = new QLineEdit(layoutWidget);
        photoEdit->setObjectName(QStringLiteral("photoEdit"));
        photoEdit->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, photoEdit);


        gridLayout->addLayout(formLayout_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addDogButton = new QPushButton(layoutWidget);
        addDogButton->setObjectName(QStringLiteral("addDogButton"));
        addDogButton->setFont(font);

        horizontalLayout->addWidget(addDogButton);

        removeDogButton = new QPushButton(layoutWidget);
        removeDogButton->setObjectName(QStringLiteral("removeDogButton"));
        removeDogButton->setFont(font);

        horizontalLayout->addWidget(removeDogButton);

        filterDogButton = new QPushButton(layoutWidget);
        filterDogButton->setObjectName(QStringLiteral("filterDogButton"));
        filterDogButton->setFont(font);

        horizontalLayout->addWidget(filterDogButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        weightFilterLabel = new QLabel(layoutWidget);
        weightFilterLabel->setObjectName(QStringLiteral("weightFilterLabel"));
        weightFilterLabel->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, weightFilterLabel);

        weightFilterEdit = new QLineEdit(layoutWidget);
        weightFilterEdit->setObjectName(QStringLiteral("weightFilterEdit"));
        weightFilterEdit->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, weightFilterEdit);


        gridLayout->addLayout(formLayout_6, 6, 0, 1, 1);

        Lab1214Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lab1214Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 21));
        Lab1214Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Lab1214Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Lab1214Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Lab1214Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Lab1214Class->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        breedLabel->setBuddy(breedEdit);
        nameLabel->setBuddy(nameEdit);
        ageLabel->setBuddy(ageEdit);
        weightLagel->setBuddy(weightEdit);
        photoLabel->setBuddy(photoEdit);
        weightFilterLabel->setBuddy(weightFilterEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(Lab1214Class);
        QObject::connect(addDogButton, SIGNAL(clicked()), Lab1214Class, SLOT(addButtonHandler()));
        QObject::connect(removeDogButton, SIGNAL(clicked()), Lab1214Class, SLOT(removeButtonHandler()));

        QMetaObject::connectSlotsByName(Lab1214Class);
    } // setupUi

    void retranslateUi(QMainWindow *Lab1214Class)
    {
        Lab1214Class->setWindowTitle(QApplication::translate("Lab1214Class", "Lab1214", nullptr));
        breedLabel->setText(QApplication::translate("Lab1214Class", "Breed:", nullptr));
        nameLabel->setText(QApplication::translate("Lab1214Class", "Name:", nullptr));
        ageLabel->setText(QApplication::translate("Lab1214Class", "Age:", nullptr));
        weightLagel->setText(QApplication::translate("Lab1214Class", "Weight:", nullptr));
        photoLabel->setText(QApplication::translate("Lab1214Class", "Photo link:", nullptr));
        addDogButton->setText(QApplication::translate("Lab1214Class", "Add", nullptr));
        removeDogButton->setText(QApplication::translate("Lab1214Class", "Remove", nullptr));
        filterDogButton->setText(QApplication::translate("Lab1214Class", "Filter", nullptr));
        weightFilterLabel->setText(QApplication::translate("Lab1214Class", "Filter by weight:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab1214Class: public Ui_Lab1214Class {};
} // namespace Ui
QT_END_NAMESPACE

#endif // UI_LAB1214_H
