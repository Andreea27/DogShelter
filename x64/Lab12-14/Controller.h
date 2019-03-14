#pragma once
#include "Repository.h"
#include "DogValidator.h"
#include "FileDogs.h"
#include "AdoptionList.h"

class Controller
{
private:
	Repository repo;
	DogValidator validator;
	FileDogs* adopted;

public:
	Controller(const Repository& r, FileDogs* a, DogValidator v) : repo{ r }, adopted{ a }, validator { v } {}

	Repository getRepo() const { return repo; }

	/*
	Adds a dog to the repository.
	Input: d-Dog.
	Output: the dog is addes to the repository.
	1-the dog is successfully added
	0-the dog was not added
	*/
	int addDogCtrl(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight);

	/*
	Removes a dog from the repository.
	Input:  d-Dog.
	Output: the dog is removed from the repository.
	1-the dog is successfully removed
	0-the dog was not removed
	*/
	int removeDogCtrl(const std::string& breed, const std::string& name);

	/*
	Updates a dog from the repository
	Input: d-Dog
	breed,name,photo(link)-strings
	age-integer
	Output: the dog is updated
	1-the dog is successfully updated
	0-the dog was not updated
	*/
	int updateDogCtrl(const std::string& breed, const std::string& name, const int& age, const std::string& photo, const double& weight);

	/*
	Gets the list of dogs.
	Input:-
	Output: a dynamic vector with the dogs.
	*/
	std::vector<Dog> getDogsCtrl() const;

	void seePhotoCtrl(Dog d);

	std::vector<Dog> filterByBreedAndAgeCtrl(const std::string& breed, const int& age) const;

	std::vector<Dog> filterByAgeCtrl(const int& age) const;

	std::vector<Dog> filterByWeightCtrl(const double& weight) const;

	int addAoptionList(const Dog& dog);

	std::vector<Dog> getAllAdoptedCtrl() const;

	void setAdoptionFile(const int& filename);

	void saveAdoptionList();

	void openAdoptionList();

};