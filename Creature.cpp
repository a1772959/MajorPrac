#include "Creature.h"
#include <string>
using namespace std;

Creature::Creature()
{
	Name = "Default";
	Health = 1;
	AC = 10; 
	toHit = 2;
	dexMod = 0; 
	Engaged = NULL; // Not quite sure if this is done right. Meant to represent an empty Creature pointer.
}

Creature::Creature(string setName, int setHP, int setAC, int setToHit, int setDexMod)
{
	string Name = setName;
	int Heath = setHP;
	int AC = setAC; 
	int toHit = setToHit;
	int dexMod = setDexMod; 
	Creature * Engaged; // * ^
}

void Creature::Disengage(/* May have to put the Team object for disengaged creature in here */) 
{
	Engaged->Engaged = NULL; 
	// Disengaged.add(Engaged) //Disengaged team not yet implemented
	Engaged = NULL;
	// Disengage.add(?)
}

void act()
{

}

Creature::~Creature()
{

}