#include "Repository.h"
#include <string>
#include <fstream>
#include "Utils.h"
#include "RepositoryExceptions.h"

using namespace std;

Repository::Repository(const std::string& filename)
{
	this->filename = filename;
	this->readFromFile();
}

int Repository::addDog(const Dog& d)
{
	if (findDogByBreedAndNamePos(d.getBreed(), d.getName()) == -1)
	{

		this->dogs.push_back(d);
		this->writeToFile();
		return 1;
	}
	//else throw  DuplicateSongException();
	return 0;
}

Dog Repository::findDogByBreedAndName(const std::string & breed, const std::string & name)
{

	for (auto i : this->dogs)
	{
		Dog d = i;
		if (d.getBreed() == breed && d.getName() == name)
			return d;
	}
	return Dog{};
}

int Repository::findDogByBreedAndNamePos(const std::string & breed, const std::string & name)
{
	int k = 0;
	for (auto i : this->dogs)
	{
		Dog d = i;
		if (d.getBreed() == breed && d.getName() == name)
			return k;
		k++;
	}
	return -1;


}

int Repository::removeDog(const std::string& breed, const std::string& name)
{
	int pos = findDogByBreedAndNamePos(breed, name);
	Dog d = findDogByBreedAndName(breed, name);
	if (pos != -1)
	{

		this->dogs.erase(this->dogs.begin() + pos);
		this->writeToFile();
		return 1;
	}
	return 0;

}

int Repository::updateDog(const Dog & d)
{
	int pos = findDogByBreedAndNamePos(d.getBreed(), d.getName());
	if (pos != -1)
	{
		Dog dog = findDogByBreedAndName(d.getBreed(), d.getName());
		if (dog.getAge() != 0)
		{

			this->dogs[pos] = d;
			this->writeToFile();
			return 1;
		}

	}
	return 0;
}

std::vector<Dog> Repository::filterByBreedAndAge(const std::string & breed, const int& age) const
{
	std::vector<Dog> v = this->dogs, bar;
	/*Dog* dogsInstd::vector = this->dogs.getAllElems();

	if (breed == "")
	return this->getDogs();

	for (int i = 0; i < this->dogs.size(); i++)
	{
	Dog d = dogsInstd::vector[i];
	if (d.getBreed() == breed && d.getAge() <= age)
	v.push_back(d);
	}*/
	//[](std::vector<Dog> &v)->std::vector<Dog> {for(auto el:v)};
	//return v;

	std::copy_if(v.begin(), v.end(), std::back_inserter(bar), [breed, age](const Dog& d) {return d.getBreed() == breed && d.getAge() <= age; });
	return bar;
}

std::vector<Dog> Repository::filterByAge(const int & age) const
{
	//std::vector<Dog> v=this->dogs,bar;

	//Dog* dogsInstd::vector = this->dogs.getAllElems();

	//for (int i = 0; i < this->dogs.size(); i++)
	//{
	//Dog d = dogsInstd::vector[i];
	//if (d.getAge() <= age)
	//v.push_back(d);
	//}
	//return v;
	////return this->dogs;
	std::vector<Dog> v = this->dogs, bar;
	std::copy_if(v.begin(), v.end(), std::back_inserter(bar),  [age](const Dog& d) {return d.getAge() <= age; });
	return bar;
}

std::vector<Dog> Repository::filterByWeight(const double & weight) const
{
	std::vector<Dog> v = this->dogs, bar;

	/*Dog* dogsInstd::vector = this->dogs.getAllElems();
	Dog a{};
	a.setWeight(weight);
	for (int i = 0; i < this->dogs.size(); i++)
	{
	Dog d = dogsInstd::vector[i];
	if (d < weight)
	v.push_back(d);
	}
	return v;*/
	auto it = std::copy_if(v.begin(), v.end(), std::back_inserter(bar), [weight](const Dog& d) {return d.getWeight() < weight; });
	return bar;
}

void Repository::readFromFile()
{
	ifstream file(this->filename);

	if (!file.is_open())
		throw FileException("The file could not be opened!");

	Dog d;
	while (file >> d)
		this->dogs.push_back(d);

	file.close();
}

void Repository::writeToFile()
{
	ofstream file(this->filename);
	if (!file.is_open())
		throw FileException("The file could not be opened!");

	for (auto s : this->dogs)
	{
		file << s;
	}

	file.close();
}