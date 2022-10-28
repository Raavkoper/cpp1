#include <iostream>

class Weapon {
private:
	std::string type;

public:
	Weapon(std::string new_type);
	const std::string getType();
	void	setType(std::string new_type);
};
