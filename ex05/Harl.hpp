#ifndef HARL_H
# define HARL_H
# include <iostream>
class Harl
{
    private:
    void debug();
    void info();
    void warning();
    void error();
    void (Harl::*complainFunctions[4])();
    std::string complainLevels[4];

    public:
    Harl();
    void complain(std::string complainLevel);
};
#endif