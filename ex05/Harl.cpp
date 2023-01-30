# include "Harl.hpp"

Harl::Harl()
{
	complainLevels[0] = "DEBUG";
	complainLevels[1] = "INFO";
	complainLevels[2] = "WARNING";
	complainLevels[3] = "ERROR";
	complainFunctions[0] = &Harl::debug;
	complainFunctions[1] = &Harl::info;
	complainFunctions[2] = &Harl::warning;
	complainFunctions[3] = &Harl::error;
}

void	Harl::complain(std ::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (level == complainLevels[i])
			(this->*complainFunctions[i])();
		i++;
	}
}

void Harl::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough!. If you did I would not have to ask for it!\n" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}