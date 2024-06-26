#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie constructor: " << _name << "\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie deconstructor: " << _name << "\n";
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
