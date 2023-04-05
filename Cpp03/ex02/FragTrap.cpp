#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	name = "Default";
	Hit = 100;
	damage = 20;
	Energy = 50;
	cout << "FragTrap Worked" << endl;
}

FragTrap::FragTrap(const string nick)
{
	name = nick;
	Hit = 100;
	damage = 20;
	Energy = 50;
	cout << "Nick name constructer Worked" << endl;
}

FragTrap::FragTrap(const FragTrap& oth) :ClapTrap(oth)
{
	cout << "FragTrap Worked" << endl;
	*this = oth;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap Destroyed" << endl;
}

FragTrap&   FragTrap::operator = (const FragTrap& oth)
{
	if (this != &oth)
	{
		ClapTrap::operator=(oth);
		cout << "FragTrap Copy assigment Worked" << endl;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	cout << "HIGH FIVE" << endl;
}
