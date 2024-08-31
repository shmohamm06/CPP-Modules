#include "ScavTrap.hpp"

int main()
{
	ScavTrap *a = new ScavTrap("Wahab");
	a->attack("Raouf");
	a->takeDamage(80);
	a->beRepaired(1000);
	a->guardGate();
	return 0;
}