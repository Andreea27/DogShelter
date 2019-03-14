#pragma once
#include "Dog.h"
#include <vector>
#include <algorithm> 

class Repository
{
private:
	std::vector<Dog> dogs;
	std::string filename;

public:
	/*
	Default constructor.
	Initializes an object of type repository.
	*/
	Repository(const std::string& filename);

	/*
	Adds a dog to the repository.
	Input: d-Dog.
	Output: the dog is addes to the repository.
	1-the dog is successfully added
	0-the dog was not added
	*/
	int addDog(const Dog& d);

	//std::vector<Dog> getAllElements();

	/*
	Finds a dog by its breed and name
	Input: breed, name-string
	Output: the dog that was found, or an "empty" dof(the fields are empty or 0)

	*/
	Dog findDogByBreedAndName(const std::string& breed, const std::string& name);

	/*
	Finds a dog by its breed and name
	Input: breed, name-string
	Output: returns the position or -1 if it cannot be found
	*/
	int findDogByBreedAndNamePos(const std::string& breed, const std::string& name);

	/*
	Removes a dog from the repository.
	Input:  breed,name-strings
	Output: the dog is removed from the repository.
	1-the dog is successfully removed
	0-the dog was not removed
	*/
	int removeDog(const std::string& breed, const std::string& name);

	/*
	Updates a dog from the repository
	Input: d-Dog
	breed,name,photo(link)-strings
	age-integer
	Output: the dog is updated
	1-the dog is successfully updated
	0-the dog was not updated
	*/
	int updateDog(const Dog& d);

	/*
	Gets the list of dogs.
	Input:-
	Output: a dynamic vector with the dogs.
	*/
	std::vector<Dog> getDogs() const { return dogs; }

	/*
	Gets the list of dogs filtered by breed and age.
	Input:breed-string
			age-intiger
	Output: a dynamic vector with the dogs.
	*/
	std::vector<Dog> filterByBreedAndAge(const std::string & breed, const int& age) const;

	/*
	Gets the list of dogs filtered by age.
	Input:age-intiger
	Output: a dynamic vector with the dogs.
	*/
	std::vector<Dog> filterByAge(const int& age) const;

	/*
	Gets the list of dogs filtered by weight.
	Input:weight double
	Output: a dynamic vector with the dogs.
	*/
	std::vector<Dog>	filterByWeight(const double& weight) const;

private:
	//reading from file
	void readFromFile();
	//writeing to file
	void writeToFile();
};