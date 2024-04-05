#include <iostream>
#include <sys/types.h>

u_short sed_is_for_losers(const char** av);

/**
 * @param av: const char** av {filename, string1, string2}
 */
int main(int ac, const char** av) {
	if (ac == 4 && *av[1] && *av[2] && *av[3]) {
		return (sed_is_for_losers(av));
	}
	std::cout << "Input must be: filename "
				 "string1 string2. Try again!\n";
	return (1);
}