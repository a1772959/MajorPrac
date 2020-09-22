#include "Creature.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
//Testing the Disengage behaviour creating two creatures, manually Engaging them and then running the disengage action.
Creature one = Creature();
cout << one.Name << " " << one.Health << " " << one.AC << " " << one.toHit << " " << one.dexMod << " " << one.Engaged << endl;
Creature two = Creature();
two.Name = "Two";
cout << two.Name << " " << two.Health << " " << two.AC << " " << two.toHit << " " << two.dexMod << " " << two.Engaged << endl;
one.Engaged = &two;
cout << one.Engaged->Name << endl;
two.Engaged = &one;
cout << two.Engaged->Name << endl;
one.Disengage();
cout << one.Name << " " << one.Health << " " << one.AC << " " << one.toHit << " " << one.dexMod << " " << one.Engaged << endl;
return 0;
}