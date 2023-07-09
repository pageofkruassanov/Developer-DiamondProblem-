#pragma once
#include <iostream>
using namespace std;
class Developer
{
protected:
	string name;
	string rank;
public:
	Developer(string name, string rank) : name{ name }, rank{ rank } {};
	virtual string getName() = 0;
	virtual string getRank() = 0;
	virtual void startWork() = 0;
	virtual void finishWork() = 0;
};

