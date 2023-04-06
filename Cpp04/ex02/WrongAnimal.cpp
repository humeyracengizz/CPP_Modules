#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	cout << "WrongAnimal Worked" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& oth)
{
	*this = oth;
	cout << "WrongAnimal copy constructor worked" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal Destroyed" << endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& oth)
{
	type = oth.type;
	cout << "WrongAnimal copy assigment operator called" << endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	cout << "WrongThe Animal sound" << endl;
}

string	WrongAnimal::getType() const { return (type); }
