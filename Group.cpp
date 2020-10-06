#include "Creature.h"
#include "Group.h"
#include <string>
#include <iostream>
using namespace std;

Group::Group(int Cap)
{
	Capacity = Cap;
	Count = 0;
	List = new Creature*[Capacity];
}

void Group::addCreature(Creature Creat)
{
	List[Count] = &Creat;
	Count++;
}

void Group::removeCreature(Creature Creat)
{
	for (int i = 0; i < Count; ++i) // Find the requested creature
	{
		if (List[i] == &Creat)
		{
			List[i] = List[Count]; // Move the last entry to the removed creatures slot
			List[Count] = NULL; // Remove the last entry
			Count--;
			break;
		}
	}
}

Creature *Group::getCreature(int index)
{
	return List[index];
}

void Group::printStatus()
{
	for (int i = 0; i < Count; ++i)
	{
		cout << List[i]->getName() << " " << List[i]->getHP() << endl;
	}
}

bool Group::notEmpty() // Tests if the Group empty, used in game 'while loop' to determine if both teams are up
{
	if (Count > 0)
	{
		return true;
	}
	return false;
}

Group::~Group()
{
	delete List;
}
