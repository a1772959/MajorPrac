#include "Creature.h"
#include "Group.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
//Testing the Group object by creating two creatures and adding them. It them engages and Disengages (with manual removal) them as a Regression Test.
Creature one = Creature();
Creature two = Creature();
two.Name = "Two";

Group Disengaged = Group(2);
Disengaged.addCreature(one);
Disengaged.addCreature(two);

cout << Disengaged.getCreature(1) << endl;
cout << Disengaged.getCreature(1)->getName() << endl;
Disengaged.printStatus();
cout << endl;

one.setEngaged(two);
Disengaged.removeCreature(one);
two.setEngaged(one);
Disengaged.removeCreature(two);
cout << one.getEngaged()->Name << endl;
cout << two.getEngaged()->Name << endl << endl;
Disengaged.printStatus();

one.Disengage();
Disengaged.addCreature(one);
Disengaged.addCreature(two);
return 0;
}