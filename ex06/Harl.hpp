#pragma once

# include <string>
# define LEVELS 4

class Harl {
public:
	Harl();
	~Harl();
	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();
	void filter(int filterlevel);

	typedef void (Harl::*HarlFunc)();
	HarlFunc    funcs[LEVELS];
	std::string levels[LEVELS];
};
