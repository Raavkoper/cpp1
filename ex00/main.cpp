#include "Zombie.hpp"

int main(void)
{
	Zombie *karel = newZombie("Karel");
	karel->announce();
	delete karel;
	
	randomChump("Japie");
}