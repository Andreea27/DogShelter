#include "CSVDogs.h"
#include <fstream>
#include <Windows.h>
#include "RepositoryExceptions.h"

using namespace std;

void CSVDogs::writeToFile()
{

	ofstream f(this->filename);

	if (!f.is_open())
		throw FileException("The file could not be opened!");

	for (auto s : this->dogs)
		f << s;

	f.close();
}

void CSVDogs::displayDogs() const
{
		ShellExecuteA(NULL, NULL, "excel.exe", "CSVAdoptionList.csv", NULL, SW_SHOWMAXIMIZED);
}
