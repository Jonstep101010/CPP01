#include <iostream>
#include <string>

int main() {
	std::string  stringVAR = "HI THIS IS BRAIN";
	std::string* stringPTR = &stringVAR;
	std::string& stringREF = stringVAR;

	std::cout << &stringVAR << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << stringVAR << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}