#include <iostream>
#include <cstdlib>



int diceroll(int val)
{
	int rollval;
	//std::cout<<size<<std::endl;
	srand (time(NULL));
	rollval=(rand()%val)+1;
	//std::cout<<rollval<<std::endl;
	return rollval;
}
