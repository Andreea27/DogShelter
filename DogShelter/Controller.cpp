#include "Controller.h"
#include "Dog.h"
#include "CSVDogs.h"
#include "HTMLDogs.h"

int Controller::addDogCtrl(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight)
{
	Dog d{ breed,name,age,photo,weight };
	this->validator.validate(d);
	int res = this->repo.addDog(d);
	return res;
}

int Controller::removeDogCtrl(const std::string& breed, const std::string& name)
{

	Dog d{ breed,name,0,"wwwhttps",1 };
	this->validator.validate(d);
	int res = this->repo.removeDog(breed, name);
	return res;
}

int Controller::updateDogCtrl(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight)
{
	Dog d{ breed,name,age,photo ,weight };
	this->validator.validate(d);
	int res = this->repo.updateDog(d);
	return res;
}

std::vector<Dog> Controller::getDogsCtrl() const
{
	return this->repo.getDogs();
}

void Controller::seePhotoCtrl(Dog d)
{
	d.seePhoto();
}

std::vector<Dog> Controller::filterByBreedAndAgeCtrl(const std::string & breed, const int& age) const
{
	return this->repo.filterByBreedAndAge(breed, age);
}

std::vector<Dog> Controller::filterByAgeCtrl(const int & age) const
{
	return this->repo.filterByAge(age);
}

std::vector<Dog> Controller::filterByWeightCtrl(const double & weight) const
{
	return this->repo.filterByWeight(weight);
}

int Controller::addAoptionList(const Dog & dog)
{
	return this->adopted->add(dog);
}

std::vector<Dog> Controller::getAllAdoptedCtrl() const
{
	return this->adopted->getAllAdopted();
}

void Controller::setAdoptionFile(const int& filemode)
{
	if (filemode==1)
		this->adopted=new CSVDogs{ "CSVAdoptionList.csv" };
	else
		this->adopted= new HTMLDogs{ "HTMLAdoptionList.html" };
}

//here you need to make smth similar for html
void Controller::saveAdoptionList()
{
	if (this->adopted == nullptr)
		return;
	this->adopted->writeToFile();
}

void Controller::openAdoptionList()
{
	if (this->adopted == nullptr)
		return;
	this->adopted->displayDogs();
}

	



