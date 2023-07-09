#include "FrontendDeveloper.h"

string FrontendDeveloper::getName()
{
	return name;
}

string FrontendDeveloper::getRank()
{
	return rank;
}

void FrontendDeveloper::startWork()
{
	cout << "Frontend developer gets started" << endl;
}

void FrontendDeveloper::finishWork()
{
	cout << "Frontend developer finishes work" << endl;
}
