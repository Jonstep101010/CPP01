#pragma once

#include <iostream>
#include <string>

class Weapon {

public:
	Weapon();
	~Weapon();
	std::string& getType() const;
	void	setType(std::string type);

private:
	std::string type;
};
