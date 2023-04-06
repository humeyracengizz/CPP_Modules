#ifndef CAT_HPP
#define CAT_HPP


#include <iostream>
#include "Animal.hpp"

using	std::string;
using	std::cout;
using	std::endl;

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& oth);
		~Cat();
		Cat	&operator=(const Cat& oth);
		void	makeSound() const;
};

#endif