#include <iostream>

class Weapon {
private:
    std::string type;

public:
    Weapon();
    const std::string getType();
    void    setType(std::string new_type);
};

