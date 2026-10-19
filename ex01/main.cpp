# include "Zombie.hpp"

int main()
{
	Zombie* h = newZombie("Harold");
	h->announce();
	delete h;
	randomChump("Shane");
	return 0;
}