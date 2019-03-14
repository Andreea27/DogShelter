#include "Lab1214.h"
#include <QtWidgets/QApplication>
#include "Controller.h"
#include <iostream>
#include "RepositoryExceptions.h"
#include "CSVDogs.h"

using namespace std;


int main(int argc, char *argv[])
{
	/*QApplication a(argc, argv);
	Lab1214 w;
	w.show();
	return a.exec();*/
	try
	{
		QApplication a(argc, argv);
		Repository repo("Dogs.txt");
		FileDogs *adopted = new CSVDogs{"adopted_dogs.csv"};
		Controller ctrl(repo, adopted, DogValidator{});
		Menu w{ ctrl };
		w.show();
		return a.exec();
		//Controller adopted(adp, DogValidator{});
		//UI ui{ ctrl };
		//ui.run();
	}
	catch (FileException&)
	{
		cout << "Repository file could not be opened! The application will terminate." << endl;
		return 1;
	}
}
