#include "Zombie.hpp"

int main(void)
{
/*	stack allocted zombie */ 
	randomChump("Japie");
	
/*	heap allocated zombie */
	Zombie *karel = newZombie("Karel");
	karel->announce();
	delete karel;
}