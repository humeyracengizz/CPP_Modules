#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	cout << "WrongCat Worked" << endl;
}

WrongCat::WrongCat(const WrongCat& oth)
{
	*this = oth;
	cout << "WrongCat copy constructor worked" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat Destroyed" << endl;
}

WrongCat	&WrongCat::operator=(const WrongCat& oth)
{
	type = oth.type;
	cout << "WrongCat copy assigment operator called" << endl;
	return (*this);
}

void WrongCat::makeSound() const
{
	cout << "Wrong Meow" << endl;
}
