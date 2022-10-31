#include <iostream>

int main(void) {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "addres of the string " << &string << std::endl;
    std::cout << "addres being held by stringPTR " << stringPTR << std::endl;
    std::cout << "addres of the stringREF " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "value of the string " << string << std::endl;
    std::cout << "value being held by stringPTR " << *stringPTR << std::endl;
    std::cout << "value of the stringREF " << stringREF << std::endl;
}