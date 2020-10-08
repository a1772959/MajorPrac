#ifndef MELEE
#define MELEE

#include "Creature.h"
#include <string>
using namespace std;

class Melee : public Creature
{
public: 

	//Constructors
	Melee();
	Melee(string setName, int setHP, int setAC, int setToHit, int setDexMod, int setNumAttacks, int setDmgPerHit);
	~Melee();

	//Behaviours
	void Engage(); //random creature on free cart and store them as engaged and tell target to store them as engaged
	void Act(); // if engaged is empty then engage. then for (1-num attack): IF((rand,1,20+you->toHit)>Engaged->AC) THEN Engaged->HP=Engaged->HP=DmgPerHit

	//Setters and Getters
	void SetNumAttacks(int setNumAttacks);
	int GetNumAttacks();
	void SetDmgPerHit(int setDmgPerHit);
	int GetDmgPerHit();

	//Variables
	int numAttacks;
	int dmgPerHit;
}

#endif