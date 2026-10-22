# include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w) : name(n), weapon(w)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack() const
{
	const std::string& tool = weapon.getType();
	std::cout << name << " attacks with their " << tool << '\n';
}