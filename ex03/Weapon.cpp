#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return(type);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
