#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "Default";
    Hit = 100;
    damage = 20;
    Energy = 50;
    cout << "ScavTrap Worked" << endl;
}

ScavTrap::ScavTrap(const string nick)
{
    name = nick;
    Hit = 100;
    damage = 20;
    Energy = 50;
    cout << "Nick name constructer Worked" << endl;
}

void    ScavTrap::attack(const string& target)
{
    if (Energy <= 0 || Hit <= 0)
        cout << "Died" << endl;
    else
    {
        Energy--;
        cout << name <<" Attacked to " << target << " causing " << damage <<" points of damage!" << endl;
    }
}

ScavTrap::ScavTrap(const ScavTrap& oth) : ClapTrap(oth)
{
    cout << "Copy ScavTrap Worked" << endl;
    *this = oth;
}

ScavTrap::~ScavTrap()
{
    cout << "ScavTrap Destroyed" << endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& oth)
{
    if (this != &oth)
    {
        ClapTrap::operator=(oth);
        cout << "ScavTrap Copy assigment Worked" << endl;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    cout << "***We are the champions***\nssshh class in a gate keeper mode" << endl;
}
