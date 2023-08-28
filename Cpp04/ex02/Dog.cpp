#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	cout << "Dog constructer Worked" << endl;
	beg = new Brain();
}

Dog::Dog(const Dog& oth)
{
	*this = oth;
	cout << "Dog copy constructor worked" << endl;
}

Dog::~Dog()
{
	cout << "Dog Destroyed" << endl;
	delete beg;
}

Dog	&Dog::operator=(const Dog& oth)
{
	type = oth.type;
	beg = oth.beg;
	cout << "Dog copy assigment operator called" << endl;
	return (*this);
}

void Dog::makeSound() const
{
	cout << "Bark" << endl;
}
