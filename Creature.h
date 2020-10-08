#ifndef CREATURE
#define CREATURE

#include "Group.h"
#include <string>
using namespace std;

class Creature
{
public:
	// Constructors
	Creature();
	Creature(string setName, int setHP, int setAC, int setToHit, int setDexMod);
	/*virtual*/ ~Creature();

	// Behaviours
	//  Meaningful functions
	void Disengage(); // Escapes combat with 'Engaged', resetting both creatures 'Engaged' to empty and placing them in the disengaged set.
	/*virtual*/ void Act(); // Tells the creature to take it's turn. Each subclass version specifies how it behaves.
	//  Setters and Getters
	void SetName(string setName);
	string GetName();
	void SetHP(int setHP);
	int GetHP();
	void SetAC(int setAC);
	int GetAC();
	void SetToHit(int setToHit);
	int GetToHit();
	void SetDexMod(int setDexMod);
	int GetDexMod();
	void SetTeam(Group setTeam);
	Group *GetTeam();
	void SetEngaged(Creature setEngaged);
	Creature *GetEngaged();




	// Variables
	string name;
	int HP;
	int AC; // Value an enemy 'attack' has to reach to hit
	int toHit; // Value added to attacks
	int dexMod; // Required to determine place in initiative as well as some future features
	Group * team // Tells the creature what 'Team' it is on
	Creature * engaged; // Stores a point to the creature it is in combat with

};

#endif