#include "Zombie.hpp"

void	Zombie::init_zombie(std::string new_name) {
	name = new_name;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << name << " has unfortunately passed away :(" << std::endl;
}