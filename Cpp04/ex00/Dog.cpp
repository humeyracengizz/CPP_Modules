#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "Dog constructer Worked" << endl;
}

Dog::Dog(const Dog& oth)
{
	*this = oth;
	cout << "Dog copy constuctor worked" << endl;
}

Dog::~Dog()
{
	cout << "Dog Destroyed" << endl;
}

Dog	&Dog::operator=(const Dog& oth)
{
	type = oth.type;
	cout << "Dog copy assigment operator called" << endl;
	return (*this);
}

void Dog::makeSound() const
{
	cout << "Bark" << endl;
}
