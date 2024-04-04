#include "Zombie.hpp"

#define NUM_ZOMBIES 7

int main() {
	Zombie* horde = zombieHorde(NUM_ZOMBIES, "dwarf");

	if (!horde)
		return (1);
	for (int i = 0; i < NUM_ZOMBIES; i++) {
		horde[i].announce();
	}
	// horde[0].setname("Grimhilde");
	// horde[0].announce();
	delete[] horde;
	return (0);
}