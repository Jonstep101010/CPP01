#pragma once

#include "Weapon.hpp"
#include <string>

class HumanB
{

	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon& new_weapon);
		void attack();

	private:
		Weapon*     weapon;
		std::string name;
};
