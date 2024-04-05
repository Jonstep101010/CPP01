#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{

	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon type_toset);
		void attack();

	private:
		Weapon      weapon_type;
		std::string name;
};
