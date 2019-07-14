#pragma once
#include <iostream>

class Singleton
{
public:
	static Singleton& exemplar();

private:
	//static Singleton instance;
	Singleton() 
	{
		std::cout << "Singleton wurde instanziert\n";
	}

	Singleton(const Singleton&);	//dadurch wird ein kopieren verhindert Kopierkontruktor ist jetzt private
};

Singleton& Singleton::exemplar()	//statische Instanz wird einmal angelegt kann nicht mehr geändert werden
{
	static Singleton instance;
	return instance;
}
