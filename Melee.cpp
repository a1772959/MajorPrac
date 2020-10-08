#include "Creature.h"
#include "Group.h"
#include "Melee.h"
#include <string>
using namespace std;

void Melee::Melee()
{
	name = "Default";
	HP = 1;
	AC = 10; 
	toHit = 2;
	dexMod = 0; 
	engaged = NULL; // Not quite sure if this is done right. Meant to represent an empty melee pointer.
	numAttacks = 1;
	dmgPerHit = 1;
}

void Melee::Melee(string setName, int setHP, int setAC, int setToHit, int setDexMod, int setNumAttacks, int setDmgPerHit)
{
	name = setName;
	HP = setHP;
	AC = setAC; 
	toHit = setToHit;
	dexMod = setDexMod; 
	engaged = NULL; // * ^
	numAttacks = setNumAttacks;
	dmgPerHit = setDmgPerHit;
}

void Melee::Engage(Group *target) //NOT DONE IM CONFUSED
{
	if (target.count>0){
		target.GetCreature[((rand()%(target.Count)))]

	} else {
	cout<<"No valid targets. "<<endl 
	}
}

void Melee::Act()
{

}

Melee::~Melee()
{

}

