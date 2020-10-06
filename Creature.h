#ifndef CREATURE
#define CREATURE

#include <string>
using namespace std;

class Creature
{
public:
	// Constructors
	Creature();
	Creature(string SetName, int SetHP, int SetAC, int SetToHit, int SetDexMod);
	~Creature();

	// Behaviours
	//  Meaningful functions
	void Disengage(); // Escapes combat with 'Engaged', resetting both creatures 'Engaged' to empty and placing them in the disengaged set.
	/*virtual*/ void Act(); // Tells the creature to take it's turn. Each subclass version specifies how it behaves.
	//  Setters and Getters
	void setName(string SetName);
	string getName();
	void setHP(int SetHP);
	int getHP();
	void setAC(int SetAC);
	int getAC();
	void setToHit(int SetToHit);
	int getToHit();
	void setDexMod(int SetDexMod);
	int getDexMod();
	void setEngaged(Creature SetEngaged);
	Creature *getEngaged();




	// Variables
	string Name;
	int HP;
	int AC; // Value an enemy 'attack' has to reach to hit
	int toHit; // Value added to attacks
	int dexMod; // Required to determine place in initiative as well as some future features
	Creature * Engaged; // Stores a point to the creature it is in combat with

};

#endif