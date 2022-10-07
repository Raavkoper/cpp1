#include "Zombie.hpp"

int main(void) {
	std::cout << "initialization of the zombie array" << std::endl;
	Zombie *zombiearray = zombieHorde(5, "krekel");

	std::cout << "looping throught the array for each zombie to announce itself" << std::endl;
	for (int i = 0; i < 5; i++) {
		zombiearray[i].announce();
	}

	std::cout << "freeing the memory of the array" << std::endl;
	delete[] zombiearray;
}