#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <string>
#include <fstream>

class Replace {
private:
	std::ifstream input_file;
	std::ofstream output_file;
	std::string file_name;
	std::string s1;
	std::string s2;

public:
	Replace(std::string file, std::string s1, std::string s2);
	void	read_file();
	std::string	change_occurrence(std::string line);
};

#endif