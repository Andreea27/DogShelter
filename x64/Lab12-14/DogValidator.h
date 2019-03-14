#pragma once
#include <string>
#include "Dog.h"
#include <vector>

class DogException
{
private:
	std::vector<std::string> errors;

public:
	DogException(std::vector<std::string>_errors);
	//vector with strings that contains the errors
	std::vector<std::string> getErrors() const;
};

class DogValidator
{
public:
	//constructor
	DogValidator() {}
	//validation function
	static void validate(const Dog& d);
};