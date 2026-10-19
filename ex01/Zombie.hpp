#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce() const;
	void setName(std::string s);
};

Zombie* zombieHorde(int n, std::string name);

#endif //ZOMBIE_HPP