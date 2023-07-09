#include "BackendDeveloper.h"

string BackendDeveloper::getName()
{
	return name;
}

string BackendDeveloper::getRank()
{
	return rank;
}

void BackendDeveloper::startWork()
{
	cout << "Backend developer gets started" << endl;
}

void BackendDeveloper::finishWork()
{
	cout << "Backend developer finishes work" << endl;
}
