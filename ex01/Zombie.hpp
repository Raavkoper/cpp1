#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string zombiename);
	void	announce(void);
	~Zombie();
};
