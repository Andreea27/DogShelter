#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab1214.h"
#include "Controller.h"
#include "ui_Administrator.h"
#include "ui_Menu.h"
#include "ui_User.h"
#include <cstring>
#include <qwidget.h>
#include "ui_FileModeMenu.h"

class Administrator : public QMainWindow
{
	Q_OBJECT
	Controller ctrl;

public:
	Administrator(Controller& c, QWidget *parent = Q_NULLPTR);
	~Administrator() {}
public:
	//void initGUI();
	int getSelectedIndex();
	void connectSignalsAndSlots();
	void populateDogsList();
	void populateDogsFilterList();
	void populateDogsFilterAgeList();
	void listItemChanged();
signals:
	void addDogSignal();
	void filterDogsSignal();
	void filterDogsAgeSignal();
	void dogsUpdatedSignal();
public slots:
	void addDogButtonHandler();
	void removeDogButtonHandler();
	void uptadeButtonHandel();
	void filterDogsButtonHandler();
	void filterAgeDogsHandler();

private:
	Ui::AdministratorClass ui;
};

class User : public QMainWindow
{
	Q_OBJECT
		Controller ctrl;

public:
	User(Controller& c, QWidget *parent = Q_NULLPTR);
	~User() {}
public:
	//void initGUI();
	int getSelectedIndex();
	void connectSignalsAndSlots();
	void populateDogsList();
	void populateAdoptionList();
	void populateDogsFilterList();
	void listItemChanged();
	void listFilterItemChanged();
signals:
	void adoptSignal();
	//void nextSignal();
	void saveSignal();
	void openFileSignal();
	void filterSignal();
	void dogsUpdatedSignal();
	public slots:
	void adoptButtonHandler();
	//void nextButtonHandler();
	void saveButtonHandler();
	void openFileButtonHandler();
	void filterButtonHandler();

private:
	Ui::UserClass ui;
};

class Menu : public QMainWindow
{
	Q_OBJECT
		Controller ctrl;

public:
	Menu(Controller& c, QWidget *parent = Q_NULLPTR);
	~Menu() {}
public:
	//void initGUI();
	//int getSelectedIndex();
	void connectSignalsAndSlots();
	//void populateDogsList();
	//void populateDogsFilterList();
	//void listItemChanged();
signals:
	void administratorButtonSignal();
	void userButtonSignal();
	public slots:
	void administratorButtonHandler();
	void userButtonHandler();

private:
	Ui::MenuClass ui;
};

class FileModeMenu : public QMainWindow
{
	Q_OBJECT
		Controller ctrl;
public:
	FileModeMenu(Controller& c, QWidget *parent = Q_NULLPTR);
	void connectSignalsAndSlots();;
signals:
	void CSVSignal();
	void HTMLSignal();
	public slots:
	void CSVHandler();
	void HTMLHandler();
private:
	Ui::FileModeMenuClass ui;
};