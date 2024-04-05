#pragma once

#include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{

	public:
		HumanA(std::string name, Weapon weapon_type);
		~HumanA();
		void setWeapon(Weapon type_toset);
		void attack();

	private:
		std::string name;
		Weapon      weapon_type;
};
