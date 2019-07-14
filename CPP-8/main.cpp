#include <iostream>
#include <stdlib.h>
#include "Singleton.h"

//http://www.oop-trainer.de/Themen/Singleton.html erklärung zu Singleton
int main(void)
{
	Singleton& s = Singleton::exemplar();
	Singleton& d = s;
	Singleton& f = Singleton::exemplar();

	//Singleton& f2 = new Singleton(s);

	std::cout << &s << std::endl;
	std::cout << &d << std::endl;
	std::cout << &f << std::endl;
	std::cout << "Man sieht alle weisen auf eine Instance hin\n";

	system("Pause");
}