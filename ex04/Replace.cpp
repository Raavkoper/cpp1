#include "Replace.hpp"

Replace::Replace(std::string file, std::string s1, std::string s2) {
	this->s1 = s1;
	this->s2 = s2;
	this->input_file.open(file, std::ios::in);
	if (!input_file.is_open()) {
		std::cout << "error opening file" << std::endl;
		exit(1);
	}
	this->output_file.open(file + ".replace", std::ios::out);
	if (!output_file.is_open()) {
		std::cout << "error making new output file" << std::endl;
		exit(1);
	}
}

std::string	Replace::change_occurrence(std::string line) {
	int len = line.length();
	int sub_len = this->s1.length();
	for (int i = 0; i < len; i++) {
		if (line.append(line, i, sub_len) == s1)
			std::cout << "hoi" << std::endl;
	}
	return ("");
}

void	Replace::read_file() {
	std::string line;
	std::string new_line;
	while (std::getline(input_file, line)) {
		output_file << this->change_occurrence(line) + "\n";
	}
	input_file.close();
}