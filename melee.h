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
	Melee(string SetName, int SetHP, int SetAC, int SetToHit, int SetDexMod, int SetNumAttacks, int SetDmgPerHit);
	~Melee();

	//Behaviours
	void Engage(); //random creature on free cart and store them as engaged and tell target to store them as engaged
	void Act(); // if engaged is empty then engage. then for (1-num attack): IF((rand,1,20+you->toHit)>Engaged->AC) THEN Engaged->HP=Engaged->HP=DmgPerHit

	//Setters and Getters
	void SetNumAttacks();
	int GetNumAttacks();
	void SetNumAttacks();
	int GetNumAttacks();

	//Variables
	int NumAttacks
	int DmgPerHit
}

#endif