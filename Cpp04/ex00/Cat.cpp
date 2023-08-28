#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	cout << "Cat constructor Worked" << endl;
}

Cat::Cat(const Cat& oth)
{
	*this = oth;
	cout << "Cat copy constuctor worked" << endl;
}

Cat::~Cat()
{
	cout << "Cat Destroyed" << endl;
}

Cat	&Cat::operator=(const Cat& oth)
{
	type = oth.type;
	cout << "Cat copy assigment operator called" << endl;
	return (*this);
}

void Cat::makeSound() const
{
	cout << "Meow" << endl;
}
