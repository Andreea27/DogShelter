#include "HTMLDogs.h"
#include <fstream>
#include <Windows.h>
#include "RepositoryExceptions.h"

using namespace std;

void HTMLDogs::writeToFile()
{

	ofstream f(this->filename);

	f << "<!DOCTYPE html><html><title>HTMLAdoptionList</title><head></head><body>";
	f << "<table border = "<<1<<"><tr><td>Breed</td><td>Name</td><td>Age</td><td>Weight</td><td>Photo Link</td></tr>";

	if (!f.is_open())
		throw FileException("The file could not be opened!");

	for (auto s : this->dogs)
	{
		f << "<tr><td>"<<s.getBreed()<<"</td><td>"<<s.getName()<<"</td><td>"<<s.getAge()<<"</td><td>"<<s.getWeight() <<"</td><td>"<<s.getPhoto()<<"</td><td></tr>";
	}
	
	f << "</table></body></html>";

	f.close();
}

void HTMLDogs::displayDogs() const
{
	//string aux = "\"" + this->filename + "\""; // if the path contains spaces, we must put it inside quotations
											   //ShellExecuteA(NULL, NULL, "C:\\Program Files (x86)\\OpenOffice 4\\program\\scalc.exe", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
	//ShellExecuteA(NULL, NULL, "C:\\Users\\Andreea\\source\\repos\\Lab8__9\\Lab8__9\\EXCEL.EXE", aux.c_str(), NULL, SW_SHOWMAXIMIZED);
	ShellExecuteA(NULL, NULL, "chrome.exe", "HTMLAdoptionList.html", NULL, SW_SHOWMAXIMIZED);
}
