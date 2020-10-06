#ifndef RANGED
#define RANGED

#include "Creature.h"
#include <string>
using namespace std;

class Ranged : public Creature
{
public: 

	//Constructors
	Ranged();
	Ranged(string SetName, int SetHP, int SetAC, int SetToHit, int SetDexMod, int SetNumAttacks, int SetDmgPerHit);
	~Ranged();

	//Behaviours
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
