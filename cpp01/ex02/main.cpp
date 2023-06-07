#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	(void )argc;
	(void )argv;

	std::string br = "HI THIS IS BRAIN";
	std::string &brREF = br;
	std::string *brPTR = &br;
	

	std::cout << "The memory address of the string variable: " << &br << std::endl;
	std::cout << "The memory address of stringPTR: " << &brPTR << std::endl;
	std::cout << "The memory address of stringREF: " << &brREF << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "The value of the string variable: " << br << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *brPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << brREF << std::endl << std::endl;

	std::cout << br << std::endl;
	return (0);
}

/*
	Bu fonksiyon bize referanslar nasıl ve neden kullanılır onu öğretiyor.
	Referanslar tanımlana  değişkenler ile aynı adreslerde olurlar ve aynı değeri
	tutmayı sağlarlar. Referansları kullanma sebeplerimiz ise referansları kullanarak bir 
	fonksiyondan birden fazla değeri döndürebiliriz. Fonksiyon içinde değişen değerleri 
	referanslar aracılığıyla dışarıya aktarabiliriz.
*/