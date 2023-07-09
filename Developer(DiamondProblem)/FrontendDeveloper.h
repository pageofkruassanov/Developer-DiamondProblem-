#pragma once
#include "Developer.h"
class FrontendDeveloper : public Developer
{
public:
	FrontendDeveloper(string name, string rank) : Developer{ name , rank } {};
	virtual string getName() = 0;
	virtual string getRank() = 0;
	void startWork();
	void finishWork();
};

