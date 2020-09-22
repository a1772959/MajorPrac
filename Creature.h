#ifndef CREATURE
#define CREATURE

#include <string>
using namespace std;

class Creature
{
public:
	// Constructors
	Creature();
	Creature(string setName, int setHP, int setAC, int setToHit, int setDexMod);
	~Creature();

	// Behaviours
	//  Meaningful functions
	void Disengage(); // Escapes combat with 'Engaged', resetting both creatures 'Engaged' to empty and placing them in the disengaged set.
	/*virtual*/ void Act(); // Tells the creature to take it's turn. Each subclass version specifies how it behaves.
	//  Getters and Setters - for initial ease these are not yet being implemented



	// Variables
	string Name;
	int Health;
	int AC; // Value an enemy 'attack' has to reach to hit
	int toHit; // Value added to attacks
	int dexMod; // Required to determine place in initiative as well as some future features
	Creature * Engaged; // Stores a point to the creature it is in combat with

};

#endif