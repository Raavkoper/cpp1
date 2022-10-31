#include "Replace.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Wrong amount of arguments given :O" << std::endl;
		return (1);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	replace.read_file();
}