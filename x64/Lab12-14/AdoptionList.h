#pragma once
#include <vector>
#include "Dog.h"

class AdoptionList
{
protected:
	std::vector<Dog> dogs;

public:

	int find(const std::string & breed, const std::string & name);

	int add(const Dog& dog);

	std::vector<Dog> getAllAdopted();

	virtual ~AdoptionList(){}
};