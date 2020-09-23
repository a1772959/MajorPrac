#include "Creature.h"
#include <string>
#include <iostream>
using namespace std;

#ifndef GROUP
#define GROUP

class Group
{
public:
	Group(int Cap);
	void addCreature(Creature Creat);
	void removeCreature(Creature Creat);
	Creature *getCreature(int index);
	void printStatus();
	bool notEmpty();
	~Group();

	Creature ** List;
	int Capacity;
	int Count;
};

#endif