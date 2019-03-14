#include "AdoptionList.h"
#include <algorithm>
#include <vector>
#include "Dog.h"

int AdoptionList::find(const std::string & breed, const std::string & name)
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

int AdoptionList::add(const Dog & dog)
{
	if (find(dog.getBreed(),dog.getName())==-1)
	{
		this->dogs.push_back(dog);
		return 1;
	}
	return 0;
}

std::vector<Dog> AdoptionList::getAllAdopted()
{
	return this->dogs;
}


