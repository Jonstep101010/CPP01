#pragma once

#include <string>

class Zombie {
private:
	std::string _name;

public:
	void announce();
	void setname(std::string name);
	Zombie(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int num, std::string name);
