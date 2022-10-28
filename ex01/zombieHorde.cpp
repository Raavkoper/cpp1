#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *zombiearray = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombiearray[i].init_zombie(name);
	}
	return (zombiearray);
}