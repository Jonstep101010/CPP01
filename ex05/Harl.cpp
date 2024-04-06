#include "Harl.hpp"
#include <iostream>

Harl::Harl() : funcs() {
	funcs[0]  = &Harl::debug;
	funcs[1]  = &Harl::info;
	funcs[2]  = &Harl::warning;
	funcs[3]  = &Harl::error;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl() {
}

void Harl::debug() {
	std::cout << "DEBUG" << std::endl;
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-"
				 "ketchup burger. I really do!\n";
}

void Harl::info() {
	std::cout << "INFO\n"
			  << "I cannot believe adding extra bacon costs "
			  << "more money."
			  << "You didn't put enough bacon in my burger! "
			  << "If you did, I wouldn't be asking for more!\n";
}

void Harl::warning() {
	std::cout
		<< "WARNING\n"
		<< "I think I deserve to have some extra bacon for free."
		<< " I've been coming here for years whereas you just "
		   "started working here since last month.\n";
}

void Harl::error() {
	std::cout << "ERROR\n"
			  << "This is unacceptable."
			  << " I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	for (int i = 0; i <= LEVELS; i++) {
		if (levels[i] == level) {
			return ((this->*funcs[i])());
		}
	}
	std::cout << "Invalid level\n";
}
