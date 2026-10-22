# include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{ 

	if (weapon != NULL)
	{
		const std::string& tool = weapon->getType();
		std::cout << name << " attacks with their " << tool << '\n';
	}
	else
	{
		std::cout << name << " has no weapon" << '\n';
	}
}

void HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}