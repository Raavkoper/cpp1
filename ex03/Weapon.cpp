#include "Weapon.hpp"

Weapon::Weapon() {
    type = "poop";
}

const std::string Weapon::getType() {
    return ((const std::string)type);
}

void Weapon::setType(std::string new_type) {
    type = new_type;
}