#include "Creature.h"
#include "Group.h"
#include <string>
using namespace std;

void Creature::Creature()
{
	name = "Default";
	HP = 1;
	AC = 10; 
	toHit = 2;
	dexMod = 0; 
	engaged = NULL; // Not quite sure if this is done right. Meant to represent an empty Creature pointer.
}

void Creature::Creature(string setName, int setHP, int setAC, int setToHit, int setDexMod)
{
	string Name = setName;
	HP = setHP;
	AC = setAC; 
	ToHit = setToHit;
	DexMod = setDexMod; 
	Engaged = NULL; // * ^
}

void Creature::Disengage() 
{
	engaged->engaged = NULL; 
	engaged = NULL;
}

void Creature::Act()
{
	for (int i = 0; i < team->GetTarget->; ++i)
	{
		/* code */
	}
}

// Setters and Getters
void Creature::SetName(string setName) {name = setName;}
string Creature::getName() {return name;}
void Creature::SetHP(int setHP) {HP = setHP;}
int Creature::getHP() {return HP;}
void Creature::SetAC(int setAC) {AC = setAC;}
int Creature::getAC() {return AC;}
void Creature::SetToHit(int setToHit) {toHit = setToHit;}
int Creature::getToHit() {return ToHit;}
void Creature::SetDexMod(int setDexMod) {dexMod = setDexMod;}
int Creature::getDexMod() {return DexMod;}
void Creature::SetTeam(Group setTeam) {team = &setTeam;}
Group *Creature::getTeam() {return team;}
void Creature::setEngaged(Creature setEngaged) {engaged = &setEngaged;}
Creature *Creature::getEngaged() {return engaged;}

/*virtual*/ Creature::~Creature()
{

}