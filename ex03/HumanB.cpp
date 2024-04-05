#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon weapon_type_toset) {
	this->weapon_type = weapon_type_toset;
}

void HumanB::attack() {
	std::cout << name << " attacks with their "
			  << weapon_type.getType() << "\n";
}
