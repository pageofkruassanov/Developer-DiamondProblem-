#pragma once
#include "Developer.h"
class BackendDeveloper : public Developer
{
public:
	BackendDeveloper(string name, string rank) : Developer{ name, rank } {};
	string getName();
	string getRank();
	void startWork();
	void finishWork();
};

