#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) {
    name = new_name;
}

void    HumanB::attack() {
    std::cout << name << " attackos with his " << weapon.getType();
}