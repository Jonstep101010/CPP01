#include "Zombie.hpp"
#include <iostream>

int main() {
	randomChump("stack");
	std::cout << "- - - - - - - - - - - - - -\n";
	Zombie* jeff = newZombie("heap");
	jeff->announce();
	delete jeff;
	return (0);
}