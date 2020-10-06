#include "Creature.h"
#include "Group.h"
#include "melee.h"
#include <string>
using namespace std;

void melee::melee()
{
	Name = "Default";
	Health = 1;
	AC = 10; 
	toHit = 2;
	dexMod = 0; 
	Engaged = NULL; // Not quite sure if this is done right. Meant to represent an empty melee pointer.
	NumAttacks = 1;
	DmgPerHit = 1;
}

void melee::melee(string SetName, int SetHP, int SetAC, int SetToHit, int SetDexMod, int SetNumAttacks, int SetDmgPerHit)
{
	string Name = SetName;
	int HP = SetHP;
	int AC = SetAC; 
	int toHit = SetToHit;
	int dexMod = SetDexMod; 
	Engaged = NULL; // * ^
	int NumAttacks = SetNumAttacks;
	int DmgPerHit = SetDmgPerHit;
}

void melee::Engage(Group *target) //NOT DONE IM CONFUSED
{
	if (target.Count>0){
		target.getCreature[((rand()%(target.Count)))]

	} else {
	cout<<"No valid targets. "<<endl 
	}
}

void melee::act()
{

}

