#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB {
private:
	Weapon weapon;
	std::string name;

public:
	HumanB(std::string new_name);
	void	attack();
};
#endif