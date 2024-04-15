#include "Harl.hpp"

/**
 * @param argv: const char** av {filename, string1, string2}
 */
int main() {
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("TEST");
}