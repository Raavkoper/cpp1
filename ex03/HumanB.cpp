#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) {
    name = new_name;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << name << " attackos with his " << weapon->getType() << std::endl;
}