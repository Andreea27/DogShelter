/********************************************************************************
** Form generated from reading UI file 'Administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdministratorClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_8;
    QListWidget *dogsList;
    QVBoxLayout *verticalLayout;
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
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_7;
    QLabel *filterAgeLabel;
    QLineEdit *filterAgeLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AdministratorClass)
    {
        if (AdministratorClass->objectName().isEmpty())
            AdministratorClass->setObjectName(QStringLiteral("AdministratorClass"));
        AdministratorClass->resize(624, 465);
        centralWidget = new QWidget(AdministratorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setSpacing(6);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        dogsList = new QListWidget(centralWidget);
        dogsList->setObjectName(QStringLiteral("dogsList"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, dogsList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        breedLabel = new QLabel(centralWidget);
        breedLabel->setObjectName(QStringLiteral("breedLabel"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        breedLabel->setFont(font);
        breedLabel->setTextFormat(Qt::AutoText);
        breedLabel->setWordWrap(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, breedLabel);

        breedEdit = new QLineEdit(centralWidget);
        breedEdit->setObjectName(QStringLiteral("breedEdit"));
        breedEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, breedEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(centralWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nameEdit);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        ageLabel = new QLabel(centralWidget);
        ageLabel->setObjectName(QStringLiteral("ageLabel"));
        ageLabel->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, ageLabel);

        ageEdit = new QLineEdit(centralWidget);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));
        ageEdit->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, ageEdit);


        gridLayout->addLayout(formLayout_3, 2, 0, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        weightLagel = new QLabel(centralWidget);
        weightLagel->setObjectName(QStringLiteral("weightLagel"));
        weightLagel->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, weightLagel);

        weightEdit = new QLineEdit(centralWidget);
        weightEdit->setObjectName(QStringLiteral("weightEdit"));
        weightEdit->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, weightEdit);


        gridLayout->addLayout(formLayout_4, 3, 0, 1, 1);

        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        photoLabel = new QLabel(centralWidget);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));
        photoLabel->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, photoLabel);

        photoEdit = new QLineEdit(centralWidget);
        photoEdit->setObjectName(QStringLiteral("photoEdit"));
        photoEdit->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, photoEdit);


        gridLayout->addLayout(formLayout_5, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addDogButton = new QPushButton(centralWidget);
        addDogButton->setObjectName(QStringLiteral("addDogButton"));
        addDogButton->setFont(font);

        horizontalLayout->addWidget(addDogButton);

        removeDogButton = new QPushButton(centralWidget);
        removeDogButton->setObjectName(QStringLiteral("removeDogButton"));
        removeDogButton->setFont(font);

        horizontalLayout->addWidget(removeDogButton);

        filterDogButton = new QPushButton(centralWidget);
        filterDogButton->setObjectName(QStringLiteral("filterDogButton"));
        filterDogButton->setFont(font);

        horizontalLayout->addWidget(filterDogButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        weightFilterLabel = new QLabel(centralWidget);
        weightFilterLabel->setObjectName(QStringLiteral("weightFilterLabel"));
        weightFilterLabel->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, weightFilterLabel);

        weightFilterEdit = new QLineEdit(centralWidget);
        weightFilterEdit->setObjectName(QStringLiteral("weightFilterEdit"));
        weightFilterEdit->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, weightFilterEdit);


        gridLayout->addLayout(formLayout_6, 6, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        filterAgeLabel = new QLabel(centralWidget);
        filterAgeLabel->setObjectName(QStringLiteral("filterAgeLabel"));
        filterAgeLabel->setFont(font);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, filterAgeLabel);

        filterAgeLineEdit = new QLineEdit(centralWidget);
        filterAgeLineEdit->setObjectName(QStringLiteral("filterAgeLineEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        filterAgeLineEdit->setFont(font1);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, filterAgeLineEdit);


        verticalLayout->addLayout(formLayout_7);


        formLayout_8->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        verticalLayout_2->addLayout(formLayout_8);

        AdministratorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AdministratorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 624, 21));
        AdministratorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AdministratorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AdministratorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AdministratorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AdministratorClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        breedLabel->setBuddy(breedEdit);
        nameLabel->setBuddy(nameEdit);
        ageLabel->setBuddy(ageEdit);
        weightLagel->setBuddy(weightEdit);
        photoLabel->setBuddy(photoEdit);
        weightFilterLabel->setBuddy(weightFilterEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(AdministratorClass);
        QObject::connect(addDogButton, SIGNAL(clicked()), AdministratorClass, SLOT(addButtonHandler()));
        QObject::connect(removeDogButton, SIGNAL(clicked()), AdministratorClass, SLOT(removeButtonHandler()));
       // QObject::connect(filterAgeLineEdit, SIGNAL(textChanged(QString)), AdministratorClass, SLOT(filterAgeDogsHandler()));

        QMetaObject::connectSlotsByName(AdministratorClass);
    } // setupUi

    void retranslateUi(QMainWindow *AdministratorClass)
    {
        AdministratorClass->setWindowTitle(QApplication::translate("AdministratorClass", "Administrator", nullptr));
        breedLabel->setText(QApplication::translate("AdministratorClass", "Breed:", nullptr));
        nameLabel->setText(QApplication::translate("AdministratorClass", "Name:", nullptr));
        ageLabel->setText(QApplication::translate("AdministratorClass", "Age:", nullptr));
        weightLagel->setText(QApplication::translate("AdministratorClass", "Weight:", nullptr));
        photoLabel->setText(QApplication::translate("AdministratorClass", "Photo link:", nullptr));
        addDogButton->setText(QApplication::translate("AdministratorClass", "Add", nullptr));
        removeDogButton->setText(QApplication::translate("AdministratorClass", "Remove", nullptr));
        filterDogButton->setText(QApplication::translate("AdministratorClass", "Filter", nullptr));
        weightFilterLabel->setText(QApplication::translate("AdministratorClass", "Filter by weight:", nullptr));
        filterAgeLabel->setText(QApplication::translate("AdministratorClass", "Filter by age:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdministratorClass: public Ui_AdministratorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
