#include "Weapon.hpp"
#include <cstdio>

Weapon::Weapon() {}

Weapon::Weapon(std::string type)
	: type(type) {}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() { return (this->type); }

void Weapon::setType(std::string new_type) { type = new_type; }