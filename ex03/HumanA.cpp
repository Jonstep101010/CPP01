#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon weapon_type)
	: name(name), weapon_type(weapon_type) {}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon type_toset) {
	weapon_type = type_toset;
}

void HumanA::attack() {
	std::cout << name << " attacks with their "
			  << weapon_type.getType() << "\n";
}
