#include "Zombie.hpp"

Zombie::Zombie(std::string zombiename) {
	name = zombiename;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << " has unfortunately passed away :(" << std::endl;
}