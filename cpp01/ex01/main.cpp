#include "Zombie.hpp"

int main()
{
	Zombie *horde;

	horde = zombieHorde(10, "Mikey");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}

/*
	Bu example da zombi ordusu yapıyoruz. 10 kere for 
	döngüsünde çağırma işlemi yaptıktan sonra kendimiz delete
	fonksiyonu ile silme işlemi yapıyoruz.
*/