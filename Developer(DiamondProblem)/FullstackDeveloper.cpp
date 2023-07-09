#include "FullstackDeveloper.h"

string FullstackDeveloper::getName()
{
	return BackendDeveloper::name;
}

string FullstackDeveloper::getRank()
{
	return BackendDeveloper::rank;
}

void FullstackDeveloper::startWork()
{
	cout << "Fullstack developer gets started" << endl;
}

void FullstackDeveloper::finishWork()
{
	cout << "Fullstack developer finishes work" << endl;
}
