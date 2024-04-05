
// input of structure: filename s1 s2
// open file and replace occurences of s1 with s2
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void replace_substrings(std::string filename, std::string s1,
						std::string s2) {
	std::string   line;
	std::ifstream file(filename.c_str());
	std::ofstream newfile("tmp.txt", std::ios::trunc);
	// iterate over replacefile and replace s1 with s2
	size_t pos    = 0;
	size_t s1_len = s1.length();
	size_t s2_len = s2.length();
	while (std::getline(file, line) != 0) {
		pos = line.find(s1);
		while (pos != std::string::npos) {
			std::string newLine = line.substr(0, pos) + s2
								+ line.substr(pos + s1_len);
			line = newLine;
			pos = line.find(s1, pos + s2_len);
		}
		newfile << line << '\n';
	}
	file.close();
	newfile.close();
	std::remove(filename.c_str());
	std::rename("tmp.txt", filename.c_str());
}

int main(int ac, char** av) {
	if (ac == 4) {
		std::string replacefile;

		replacefile = std::string(av[1]) + ".replace";
		std::ifstream src(av[1], std::ios::binary);
		// do error handling on failed open
		std::ofstream dst(replacefile.c_str(), std::ios::binary);
		dst << src.rdbuf();
		src.close();
		dst.close();

		// replace occurences of s1 with s2
		// handle error on failed open

		std::string s_1(av[2]);
		std::string s_2(av[3]);
		replace_substrings(replacefile, s_1, s_2);

	} else {
		std::cout << "Input must be of structure: filename "
					 "string1 string2. Try again!\n";
		return (1);
	}
	return (0);
}