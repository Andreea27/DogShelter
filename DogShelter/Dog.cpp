#include "Dog.h"
#include <Windows.h>
#include <shellapi.h>
#include <iostream>
#include <string>
#include <vector>
#include "Utils.h"

Dog::Dog() : breed(""), name(""), age(0), photo(""), weight(0) {}

Dog::Dog(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight)
{

	this->breed = breed;
	this->name = name;
	this->age = age;
	this->photo = photo;
	this->weight = weight;
}

void Dog::seePhoto()
{
	//ShellExecuteA(NULL, NULL, "chrome.exe", this->getPhoto().c_str(), NULL, SW_SHOWMAXIMIZED);
	//ShellExecute(NULL, "open", this->getPhoto().c_str(), NULL, NULL, SW_SHOWNORMAL);
	return;
}

bool Dog::operator<(const double& weight)
{
	if (this->weight < weight)
		return true;
	else return false;
}

std::istream& operator>>(std::istream & is, Dog & d)
{
	std::string line;
	std::getline(is, line);

	std::vector<std::string> tokens = tokenize(line, ',');
	if (tokens.size() != 5)
		return is;

	d.breed = tokens[0];
	d.name = tokens[1];
	d.age = stoi(tokens[2]);
	d.weight = stoi(tokens[3]);
	d.photo = tokens[4];

	return is;
}

std::ostream & operator<<(std::ostream & os, const Dog & d)
{
	os << d.breed << "," << d.name << "," << d.age << "," << d.weight << "," << d.photo << "\n";
	return os;
}
