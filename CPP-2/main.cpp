#include <iostream>
#include "Ringpuffer.h"

void main(void)
{
	Ringpuffer ring;
	Ringpuffer* ring2 = new Ringpuffer();
	int lesen;


	std::cout << "5 Elemente einlesen" << std::endl;
	for (int i = 0; i < 5; i++) 
	{
		ring.storeelement(i + 1);
		ring2->storeelement(i + 1);
	}

	std::cout << "alles auslesen:" << std::endl;
	while (ERROR_RINGPUFFER_EMPTY != ring.readelement(lesen))
	{
		std::cout << lesen << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Puffer vollschreiben" << std::endl;
	int count = 10;
	while (ERROR_RINGPUFFER_FULL != ring.storeelement(count))
	{
		count = count + 2;
	}

	std::cout << "alles auslesen:" << std::endl;
	while (ERROR_RINGPUFFER_EMPTY != ring.readelement(lesen))
	{
		std::cout << lesen << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Puffer mit 50 werten versuchen zu füllen" << std::endl;
	for (int i = 0; i < 50; i++)
	{
		ring.storeelement(i + 1);
	}

	std::cout << "alles auslesen:" << std::endl;
	while (ERROR_RINGPUFFER_EMPTY != ring.readelement(lesen))
	{
		std::cout << lesen << std::endl;
	}

	std::cout << "2 Elemente einlesen" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		ring.storeelement(i + 1);
	}

	std::cout << "5 Elemente einlesen" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ring.storeelement(i + 100);
	}

	std::cout << "alles auslesen:" << std::endl;
	while (ERROR_RINGPUFFER_EMPTY != ring.readelement(lesen))
	{
		std::cout << lesen << std::endl;
	}

	system("pause");
}