#include "Harl.hpp"
#include <iostream>

/**
 * @param av: const char** av {level}
 */
int main(int ac, const char** av) {
	if (ac != 2) {
		std::cerr << "Usage: ./harlFilter [level]\n";
		return 1;
	}
	Harl harl;

	harl.complain(av[1]);
	return 0;
}