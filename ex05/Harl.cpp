#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
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
	HarlFunc    funcs[5] = {&Harl::debug, &Harl::info,
							&Harl::warning, &Harl::error, NULL};
	std::string levels[5]
		= {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 5; i++) {
		if (levels[i] == level) {
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "Invalid level" << std::endl;
}
