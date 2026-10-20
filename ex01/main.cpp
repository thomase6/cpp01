# include "Zombie.hpp"

int main()
{
	int num = 10;

	Zombie* horde = zombieHorde(num, "carlos");
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