#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	protected:
		FragTrap();
		FragTrap(const string nick);
		FragTrap(const FragTrap& oth);
		~FragTrap();
		FragTrap& operator =(const FragTrap& oth);
		void highFivesGuys(void);
};

#endif