#include <iostream>
#include <sys/types.h>

u_short sed_is_for_losers(const char** av);

/**
 * @param argv: const char** argv {filename, string1, string2}
 */
int main(int argc, const char** argv) {
	if (argc == 4 && *argv[1] && *argv[2] && *argv[3]) {
		return (sed_is_for_losers(argv));
	}
	std::cout << "Input must be: filename "
				 "string1 string2. Try again!\n";
	return (1);
}