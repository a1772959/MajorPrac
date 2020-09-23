#include "Creature.h"
#include "Group.h"
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
	Engaged = NULL; // * ^
}

void Creature::Disengage() 
{
	Engaged->Engaged = NULL; 
	//Disengaged.addCreature(Engaged); // Won't work within a Bahoviour. Must find solution.
	Engaged = NULL;
	//Disengage.addCreature(this);
}

void Creature::Act()
{

}

// Setters and Getters
void Creature::setName(string SetName) {Name = SetName;}
string Creature::getName() {return Name;}
void Creature::setHP(int SetHP) {Health = SetHP;}
int Creature::getHP() {return Health;}
void Creature::setAC(int SetAC) {AC = SetAC;}
int Creature::getAC() {return AC;}
void Creature::setToHit(int SetToHit) {toHit = SetToHit;}
int Creature::getToHit() {return toHit;}
void Creature::setDexMod(int SetDexMod) {dexMod = SetDexMod;}
int Creature::getDexMod() {return dexMod;}
void Creature::setEngaged(Creature SetEngaged) {Engaged = &SetEngaged;}
Creature *Creature::getEngaged() {return Engaged;}

Creature::~Creature()
{

}