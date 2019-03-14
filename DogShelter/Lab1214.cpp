#include "Lab1214.h"

Administrator::Administrator(Controller & c,QWidget *parent): ctrl{ c }, QMainWindow(parent)
{
	ui.setupUi(this);
	this->connectSignalsAndSlots();
	this->populateDogsList();
}

int Administrator::getSelectedIndex()
{
	if (this->ui.dogsList->count() == 0)
		return -1;

	QModelIndexList index = this->ui.dogsList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
	{
		this->ui.breedEdit->clear();
		this->ui.nameEdit->clear();
		this->ui.ageEdit->clear();
		this->ui.weightEdit->clear();
		this->ui.photoEdit->clear();
		return -1;
	}
	int idx = index.at(0).row();
	return idx;
}

void Administrator::connectSignalsAndSlots()
{
	QObject::connect(this, &Administrator::dogsUpdatedSignal, this, &Administrator::populateDogsList);
	QObject::connect(this->ui.dogsList, &QListWidget::itemSelectionChanged, this, [this]() {this->listItemChanged(); });
	QObject::connect(this->ui.addDogButton, SIGNAL(clicked()), this, SLOT(addDogButtonHandler()));
	QObject::connect(this->ui.removeDogButton, SIGNAL(clicked()), this, SLOT(removeDogButtonHandler()));
	QObject::connect(this->ui.filterDogButton, SIGNAL(clicked()), this, SLOT(filterDogsButtonHandler()));
	QObject::connect(this, &Administrator::filterDogsSignal, this, &Administrator::populateDogsFilterList);
	QObject::connect(this, &Administrator::filterDogsAgeSignal, this, &Administrator::populateDogsFilterAgeList);
	QObject::connect(this->ui.filterAgeLineEdit, SIGNAL(textChanged(QString)), this, SLOT(filterAgeDogsHandler()));
}

void Administrator::populateDogsList()
{
	if (this->ui.dogsList->count() > 0)
		this->ui.dogsList->clear();

	for (auto d : this->ctrl.getDogsCtrl())
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName() /*+ ", "+d.getAge()+", "+d.getWeight()+", "+d.getWeight()*/);
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.dogsList->addItem(item);
	}
	if (this->ctrl.getDogsCtrl().size() > 0) this->ui.dogsList->setCurrentRow(0);

}

void Administrator::populateDogsFilterList()
{
	QString weightFilter = this->ui.weightFilterEdit->text();
	double weight;
	if (weightFilter.toStdString() == "") weight = 0;
	else weight = std::stoi(weightFilter.toStdString());

	if (this->ui.dogsList->count() > 0)
		this->ui.dogsList->clear();

	for (auto d : this->ctrl.filterByWeightCtrl(weight))
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName() /*+ ", "+d.getAge()+", "+d.getWeight()+", "+d.getWeight()*/);
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.dogsList->addItem(item);
	}
	if (this->ctrl.filterByWeightCtrl(weight).size() > 0) this->ui.dogsList->setCurrentRow(0);

}

void Administrator::populateDogsFilterAgeList()
{
	QString ageFilter = this->ui.filterAgeLineEdit->text();
	int age;
	if (ageFilter.toStdString() == "") age = 0;
	else age = std::stoi(ageFilter.toStdString());
	if (this->ui.dogsList->count() > 0)
		this->ui.dogsList->clear();

	for (auto d : this->ctrl.filterByAgeCtrl(age))
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName() /*+ ", "+d.getAge()+", "+d.getWeight()+", "+d.getWeight()*/);
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.dogsList->addItem(item);
	}
	if (this->ctrl.filterByAgeCtrl(age).size() > 0) this->ui.dogsList->setCurrentRow(0);
}

void Administrator::listItemChanged()
{
	int idx = this->getSelectedIndex();
	if (idx == -1)
		return;
	if (idx >= this->ctrl.getDogsCtrl().size())
		return;
	Dog d = this->ctrl.getDogsCtrl()[idx];

	this->ui.breedEdit->setText(QString::fromStdString(d.getBreed()));
	this->ui.nameEdit->setText(QString::fromStdString(d.getName()));
	this->ui.ageEdit->setText(QString::fromStdString(std::to_string(d.getAge())));
	this->ui.weightEdit->setText(QString::fromStdString(std::to_string(d.getWeight())));
	this->ui.photoEdit->setText(QString::fromStdString(d.getPhoto()));
}

void Administrator::addDogButtonHandler()
{
	QString dogBreed = this->ui.breedEdit->text();
	QString dogName = this->ui.nameEdit->text();
	QString dogAge = this->ui.ageEdit->text();
	QString dogWeight = this->ui.weightEdit->text();
	QString dogPhoto = this->ui.photoEdit->text();
	this->ctrl.addDogCtrl(dogBreed.toStdString(), dogName.toStdString(), std::stoi(dogAge.toStdString()), dogPhoto.toStdString(), std::stoi(dogWeight.toStdString()));
	emit dogsUpdatedSignal();

}

void Administrator::removeDogButtonHandler()
{
	QString dogBreed = this->ui.breedEdit->text();
	QString dogName = this->ui.nameEdit->text();
	this->ctrl.removeDogCtrl(dogBreed.toStdString(), dogName.toStdString());
	emit dogsUpdatedSignal();
}

void Administrator::uptadeButtonHandel()
{
	QString dogBreed = this->ui.breedEdit->text();
	QString dogName = this->ui.nameEdit->text();
	QString dogAge = this->ui.ageEdit->text();
	QString dogWeight = this->ui.weightEdit->text();
	QString dogPhoto = this->ui.photoEdit->text();
	this->ctrl.updateDogCtrl(dogBreed.toStdString(), dogName.toStdString(), std::stoi(dogAge.toStdString()), dogPhoto.toStdString(), std::stoi(dogWeight.toStdString()));
	emit dogsUpdatedSignal();
}

void Administrator::filterDogsButtonHandler()
{
	emit filterDogsSignal();
}

void Administrator::filterAgeDogsHandler()
{
	emit filterDogsAgeSignal();
}

User::User(Controller & c, QWidget * parent):ctrl { c }, QMainWindow(parent)
{
	ui.setupUi(this);
	this->connectSignalsAndSlots();
	this->populateDogsList();
	//this->populateAdoptionList();
}

int User::getSelectedIndex()
{
	if (this->ui.dogsList->count() == 0)
		return -1;

	QModelIndexList index = this->ui.dogsList->selectionModel()->selectedIndexes();
	if (index.size() == 0)
	{
		this->ui.breedEdit->clear();
		this->ui.nameEdit->clear();
		this->ui.ageEdit->clear();
		this->ui.weightEdit->clear();
		this->ui.photoEdit->clear();
		return -1;
	}
	int idx = index.at(0).row();
	return idx;
}

void User::connectSignalsAndSlots()
{
	QObject::connect(this, &User::dogsUpdatedSignal, this, &User::populateDogsList);
	QObject::connect(this, &User::adoptSignal, this, &User::populateAdoptionList);
	QObject::connect(this, &User::filterSignal, this, &User::populateDogsFilterList);
	QObject::connect(this->ui.dogsList, &QListWidget::itemSelectionChanged, this, [this]() {this->listItemChanged(); });
	QObject::connect(this->ui.dogsList, &QListWidget::itemSelectionChanged, this, [this]() {this->listFilterItemChanged(); });
	//QObject::connect(this->dogsFilterList, &QListWidget::itemSelectionChanged, this, [this]() {this->listItemChanged(); });
	QObject::connect(this->ui.adoptButton, SIGNAL(clicked()), this, SLOT(adoptButtonHandler()));
	//QObject::connect(this->ui.nextButton, SIGNAL(clicked()), this, SLOT(nextButtonHandler()));
	QObject::connect(this->ui.filterButton, SIGNAL(clicked()), this, SLOT(filterButtonHandler()));
	QObject::connect(this->ui.saveButton, SIGNAL(clicked()), this, SLOT(saveButtonHandler()));
	QObject::connect(this->ui.openFileButton, SIGNAL(clicked()), this, SLOT(openFileButtonHandler()));
}

void User::populateDogsList()
{
	if (this->ui.dogsList->count() > 0)
		this->ui.dogsList->clear();

	for (auto d : this->ctrl.getDogsCtrl())
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName() /*+ ", "+d.getAge()+", "+d.getWeight()+", "+d.getWeight()*/);
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.dogsList->addItem(item);
	}
	if (this->ctrl.getDogsCtrl().size() > 0) this->ui.dogsList->setCurrentRow(0);
}

void User::populateAdoptionList()
{
	if (this->ui.adoptionList->count() > 0)
		this->ui.adoptionList->clear();

	std::vector<Dog> dogs = this->ctrl.getAllAdoptedCtrl();

	for (auto d : this->ctrl.getAllAdoptedCtrl())
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName());
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.adoptionList->addItem(item);
		}
		if (this->ctrl.getAllAdoptedCtrl().size() > 0) this->ui.adoptionList->setCurrentRow(0);
}

void User::populateDogsFilterList()
{
	QString breedFilter = this->ui.breedFilterEdit->text();
	QString ageFilter = this->ui.ageFilterEdit->text();
	int age;
	std::string breed;
	if (ageFilter.toStdString() == "" || breedFilter.toStdString()=="") age = 0;
	else 
	{
		breed = breedFilter.toStdString();
		age = std::stoi(ageFilter.toStdString()); 
	}

	if (this->ui.dogsList->count() > 0)
		this->ui.dogsList->clear();

	for (auto d : this->ctrl.filterByBreedAndAgeCtrl(breed,age))
	{
		QString itemInList = QString::fromStdString(d.getBreed() + ", " + d.getName() /*+ ", "+d.getAge()+", "+d.getWeight()+", "+d.getWeight()*/);
		QFont f{ "Verdana",15 };
		QListWidgetItem* item = new QListWidgetItem{ itemInList };
		item->setFont(f);
		this->ui.dogsList->addItem(item);
	}
	if (this->ctrl.filterByBreedAndAgeCtrl(breed, age).size() > 0) this->ui.dogsList->setCurrentRow(0);
}

void User::listItemChanged()
{
	int idx = this->getSelectedIndex();
	if (idx == -1)
		return;
	if (idx >= this->ctrl.getDogsCtrl().size())
		return;
	Dog d = this->ctrl.getDogsCtrl()[idx];

	this->ui.breedEdit->setText(QString::fromStdString(d.getBreed()));
	this->ui.nameEdit->setText(QString::fromStdString(d.getName()));
	this->ui.ageEdit->setText(QString::fromStdString(std::to_string(d.getAge())));
	this->ui.weightEdit->setText(QString::fromStdString(std::to_string(d.getWeight())));
	this->ui.photoEdit->setText(QString::fromStdString(d.getPhoto()));

}

void User::listFilterItemChanged()
{
	QString breedFilter = this->ui.breedFilterEdit->text();
	QString ageFilter = this->ui.ageFilterEdit->text();
	int age;
	std::string breed;
	if (ageFilter.toStdString() == "" || breedFilter.toStdString() == "") age = 0;
	else
	{
		breed = breedFilter.toStdString();
		age = std::stoi(ageFilter.toStdString());
	}
	int idx = this->getSelectedIndex();
	if (idx == -1)
		return;
	if (idx >= this->ctrl.filterByBreedAndAgeCtrl(breed, age).size())
		return;
	Dog d = this->ctrl.filterByBreedAndAgeCtrl(breed, age)[idx];

	this->ui.breedEdit->setText(QString::fromStdString(d.getBreed()));
	this->ui.nameEdit->setText(QString::fromStdString(d.getName()));
	this->ui.ageEdit->setText(QString::fromStdString(std::to_string(d.getAge())));
	this->ui.weightEdit->setText(QString::fromStdString(std::to_string(d.getWeight())));
	this->ui.photoEdit->setText(QString::fromStdString(d.getPhoto()));

}

void User::adoptButtonHandler()
{
	QString dogBreed = this->ui.breedEdit->text();
	QString dogName = this->ui.nameEdit->text();
	QString dogAge = this->ui.ageEdit->text();
	QString dogWeight = this->ui.weightEdit->text();
	QString dogPhoto = this->ui.photoEdit->text();
	Dog d=Dog(dogBreed.toStdString(), dogName.toStdString(), std::stoi(dogAge.toStdString()), dogPhoto.toStdString(), std::stoi(dogWeight.toStdString()));
	this->ctrl.addAoptionList(d);
	emit adoptSignal();
}

//void User::nextButtonHandler()
//{
//	//QModelIndexList index = this->ui.dogsList->selectionModel()->selectedIndexes();
//	emit nextSignal();
//}

void User::saveButtonHandler()
{
	this->ctrl.saveAdoptionList();
	emit saveSignal();
}

void User::openFileButtonHandler()
{
	this->ctrl.openAdoptionList();
	emit openFileSignal();
}

void User::filterButtonHandler()
{
	emit filterSignal();
}

Menu::Menu(Controller & c, QWidget * parent) : ctrl{ c }, QMainWindow{ parent }
{
	ui.setupUi(this);
	this->connectSignalsAndSlots();
}

void Menu::connectSignalsAndSlots()
{
	QObject::connect(this->ui.administratorButton, SIGNAL(clicked()), this, SLOT(administratorButtonHandler()));
	QObject::connect(this->ui.userButton, SIGNAL(clicked()), this, SLOT(userButtonHandler()));
}

void Menu::administratorButtonHandler()
{
	Administrator *newWindow = new Administrator{ ctrl };
	newWindow->show();
	emit administratorButtonSignal();
}

void Menu::userButtonHandler()
{
	FileModeMenu *newWindow = new FileModeMenu{ ctrl };
	newWindow->show();
	emit userButtonSignal();
}

FileModeMenu::FileModeMenu(Controller & c, QWidget * parent): ctrl{c},QMainWindow{parent}
{
	ui.setupUi(this);
	this->connectSignalsAndSlots();
}

void FileModeMenu::connectSignalsAndSlots()
{
	QObject::connect(this->ui.CSVButton, SIGNAL(clicked()), this, SLOT(CSVHandler()));
	QObject::connect(this->ui.HTMLButton, SIGNAL(clicked()), this, SLOT(HTMLHandler()));

}

void FileModeMenu::CSVHandler()
{
	this->ctrl.setAdoptionFile(1);
	User *newWindow = new User{ ctrl };
	newWindow->show();
}

void FileModeMenu::HTMLHandler()
{
	this->ctrl.setAdoptionFile(2);
	User *newWindow = new User{ ctrl };
	newWindow->show();
}
