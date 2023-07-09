#pragma once
#include "FrontendDeveloper.h"
#include "BackendDeveloper.h"
class FullstackDeveloper :virtual public BackendDeveloper,virtual public FrontendDeveloper
{
public:
	FullstackDeveloper(string name, string rank) : BackendDeveloper(name, rank), FrontendDeveloper(name, rank) {};
	string getName();
	string getRank();
	void startWork();
	void finishWork();
};

