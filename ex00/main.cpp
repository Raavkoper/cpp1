#include "Zombie.hpp"

int main(void)
{
	std::cout << "allocating a zombie on the heap" << std::endl;
	Zombie *karel = newZombie("Karel");
	karel->announce();
	
	std::cout << "allocating a zombie on the stack" << std::endl;
	randomChump("Japie");
	std::cout << "the zombie on the stack has left the scope" << std::endl;

	delete karel;
	std::cout << "the memory of the heap zombie has been freed" << std::endl;
} 