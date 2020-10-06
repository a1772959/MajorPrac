#include "Creature.h"
#include "Group.h"
#include <string>
#include <iostream>


extern int diceroll(int val);

int main()
{
	std::cout<<"Value is: "<<diceroll(20)<<std::endl;
return 0;
}