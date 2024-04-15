#include "Harl.hpp"
#include <iostream>

/**
 * @param argv: const char** argv {level}
 */
int main(int argc, const char** argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./harlFilter [level]\n";
		return 1;
	}
	Harl harl;

	harl.complain(argv[1]);
	return 0;
}