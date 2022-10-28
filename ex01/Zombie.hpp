#include <iostream>

class Zombie {
private:
	std::string name;

public:
	void	init_zombie(std::string new_name);
	void	announce(void);
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);