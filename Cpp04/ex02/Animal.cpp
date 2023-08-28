#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	cout << "Animal Worked" << endl;
}

Animal::Animal(const Animal& oth)
{
	*this = oth;
	cout << "Animal copy constructor worked" << endl;
}

Animal::~Animal()
{
	cout << "Animal Destroyed" << endl;
}

void	Animal::operator=(const Animal& oth)
{
	type = oth.type;
	cout << "Animal copy assigment operator called" << endl;
}

void Animal::makeSound() const
{
	cout << "The Animal sound" << endl;
}

string	Animal::getType() const { return (type); }
