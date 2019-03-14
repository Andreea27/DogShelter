#include "DogValidator.h"

using namespace std;

DogException::DogException(std::vector<std::string> _errors) :errors{ _errors }
{
}

std::vector<std::string> DogException::getErrors() const
{
	return this->errors;
}

void DogValidator::validate(const Dog & d)
{
	vector<string> errors;
	if (!isupper(d.getBreed()[0]))
		errors.push_back("The breed must start with capital letter!\n");
	if (d.getBreed().size() < 3)
		errors.push_back(string("The breed cannot be less that 2 characters!\n"));
	if (!isupper(d.getName()[0]))
		errors.push_back(string("The name must start with capital letter!\n"));
	if (d.getName().size() < 3)
		errors.push_back(string("The name cannot be less that 2 characters!\n"));
	if (d.getAge()<0)
		errors.push_back(string("The age cannot be less than 0!\n"));
	if (d.getWeight() <= 0)
		errors.push_back(string("The weght cannot be less than or equal to 0!\n"));

	size_t posWww = d.getPhoto().find("www");
	size_t posHttp = d.getPhoto().find("http");
	if (posWww != 0 && posHttp != 0)
		errors.push_back(string("The photo source must start with one of the following strings: \"www\" or \"http\"\n"));

	if (errors.size() > 0)
		throw DogException(errors);
}
