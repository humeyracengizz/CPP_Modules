#include "Zombie.hpp"

int main()
{
    Zombie zombie1 = Zombie("Darly");
    zombie1.announce();

    Zombie *zombie2 = newZombie("Rick");
    zombie2->announce();
    
    delete zombie2;

    randomChump("Negan");

    return (0);
}
