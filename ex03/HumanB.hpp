#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(std::string n);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon& w);
};

#endif //HUMANB_HPP