#include "Harl.hpp"

int main()
{
    Harl myDearHarl;

    myDearHarl.complain("DEBUG");
    myDearHarl.complain("INFO");
    myDearHarl.complain("WARNING");
    myDearHarl.complain("ERROR");
    myDearHarl.complain("");
    myDearHarl.complain("Some random input");
}