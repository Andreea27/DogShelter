#pragma once
#include "AdoptionList.h"

class FileDogs : public AdoptionList
{
protected:
	std::string filename;
public:
	//constructor
	FileDogs(const std::string& filename);
	//destructor
	virtual ~FileDogs() {}
	//fct for writeing to file
	virtual void writeToFile() = 0;
	//fct for displaying the dogs in the file
	virtual void displayDogs() const = 0;
};