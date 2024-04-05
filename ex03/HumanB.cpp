#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
	: weapon(NULL), name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& new_weapon) {
	this->weapon = &new_weapon;
}

void HumanB::attack() {
	if (weapon != 0) {
		std::cout << name << " attacks with their "
				  << weapon->getType() << "\n";
	} else {
		std::cout << name << " (unarmed) has been injured!\n";
	}
}
