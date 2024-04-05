#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <sys/types.h>

static void replace_substrings(std::ifstream&     infile,
							   std::ofstream&     outfile,
							   const std::string& str1,
							   const std::string& str2) {
	size_t      pos    = 0;
	size_t      s1_len = str1.length();
	size_t      s2_len = str2.length();
	std::string line;
	// iterate over outfile and replace s1 with s2
	while (std::getline(infile, line) != 0) {
		pos = line.find(str1);
		while (pos != std::string::npos) {
			std::string newLine = line.substr(0, pos) + str2
								+ line.substr(pos + s1_len);
			line = newLine;
			pos  = line.find(str1, pos + s2_len);
		}
		outfile << line << '\n';
	}
}

u_short sed_is_for_losers(const char** av) {
	std::ifstream infile(av[1]);
	if (!infile.is_open()) {
		std::cout << "Error: could not open infile\n";
		return (1);
	}
	std::string   new_name = std::string(av[1]) + ".replace";
	std::ofstream outfile(new_name.c_str(), std::ios::trunc);
	if (!outfile.is_open()) {
		std::cout << "Error: could not open outfile\n";
		return (1);
	}

	replace_substrings(infile, outfile, av[2], av[3]);
	infile.close();
	outfile.close();
	return (0);
}