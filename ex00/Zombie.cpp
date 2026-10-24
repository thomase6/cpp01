# include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{
}

Zombie::~Zombie()
{
	std::cout << name << " has perished again.\n"; 
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
