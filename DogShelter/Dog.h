#pragma once
#include <iostream>
#include <Windows.h>

class Dog
{
private:
	std::string breed, name, photo;
	int age;
	double weight;

public:
	Dog();

	Dog(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight);

	std::string getBreed() const { return breed; }
	std::string getName() const { return name; }
	int getAge() const { return age; }
	double getWeight() const { return weight; }
	std::string getPhoto() const { return photo; }
	void setBreed(std::string b) { breed = b; }
	void setName(std::string n) { name = n; }
	void setAge(int a) { age = a; }
	void setWeight(double w) { weight = w; }
	void setPhoto(std::string p) { photo = p; }
	void seePhoto();
	bool operator<(const double& weight);

	friend std::istream& operator>>(std::istream& is, Dog& d);
	friend std::ostream& operator<<(std::ostream& os, const Dog& d);
};