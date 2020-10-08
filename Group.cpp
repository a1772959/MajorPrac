#include "Creature.h"
#include "Group.h"
#include <string>
#include <iostream>
using namespace std;

Group::Group(int cap)
{
	capacity = cap;
	count = 0;
	list = new Creature*[capacity];
}

void Group::addCreature(Creature creat)
{
	list[count] = &creat;
	count++;
}

void Group::removeCreature(Creature creat)
{
	for (int i = 0; i < count; ++i) // Find the requested creature
	{
		if (list[i] == &creat)
		{
			list[i] = list[count]; // Move the last entry to the removed creatures slot
			list[Count] = NULL; // Remove the last entry
			count--;
			break;
		}
	}
}

Creature *Group::GetCreature(int index)
{
	return list[index];
}

void Group::PrintStatus()
{
	for (int i = 0; i < count; ++i)
	{
		cout << list[i]->GetName() << " " << list[i]->GetHP() << endl;
	}
}

bool Group::NotEmpty() // Tests if the Group empty, used in game 'while loop' to determine if both teams are up
{
	if (count > 0)
	{
		return true;
	}
	return false;
}

Group::~Group()
{
	delete list;
}
