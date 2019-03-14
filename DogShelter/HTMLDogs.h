#pragma once
#include "FileDogs.h"
#include <string>

class HTMLDogs : public FileDogs
{
public:
	HTMLDogs(const std::string& filename) : FileDogs{ filename } {}

	/*
	Writes the dogs to file.
	Throws: FileException - if it cannot write.
	*/
	void writeToFile() override;

	/*
	Displays the dogs using Microsof Excel.
	*/
	void displayDogs() const override;
};