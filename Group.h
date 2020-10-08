#ifndef GROUP
#define GROUP


#include "Creature.h"
#include <string>
#include <iostream>
using namespace std;

class Group
{
public:
	// Constructors
	Group(int cap);
	~Group();
	
	// Behaviours
	void AddCreature(Creature creat);
	void RemoveCreature(Creature creat);
	Creature *GetCreature(int index);
	void PrintStatus();
	bool NotEmpty();

	// Setters and Getters


	// Variables
	Creature ** list;
	int capacity;
	int count;
};

#endif