# include "Zombie.hpp"

int main()
{
	int num = 100;

	Zombie* horde = zombieHorde(num, "Carlos");
	if (horde != NULL)
	{
		for (int i = 0; i < num; i++)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
	return 0;
}
