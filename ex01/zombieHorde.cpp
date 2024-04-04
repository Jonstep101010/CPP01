#include "Zombie.hpp"
#include <iostream>
#include <sstream>

Zombie* zombieHorde(int num, std::string name) {
	if (num <= 0) {
		std::cout << "N must be positive\n";
		return (NULL);
	}
	Zombie* horde = new Zombie[num];
	for (; (num--) != 0;) {
		std::stringstream index;
		index << num;
		horde[num].setname(name + "_" + index.str());
	}
	return (horde);
}