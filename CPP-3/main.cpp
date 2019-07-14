#include "IOChannel.h"

void main()
{
	IOChannel ringChannel;
	IOChannel* ringch = new IOChannel();
	int number = 9;
	int count = 0;
	for (int i = 1; i <= number; i++) 
	{
		if (ringChannel.storeelement(count, i) == ERROR_RINGPUFFER_FULL || count > 2)
		{
			count++;
			ringChannel.storeelement(count, i);
		}
		if (count > 2) {
			std::cout << "Puffer voll: "<< i << std::endl;
		}
	}
	std::cout << "Daten eingelesen!" << std::endl;

	int lesen;
	std::cout << "\nPuffer 1:" << std::endl;
	while (ringChannel.readelement(0, lesen) != ERROR_RINGPUFFER_EMPTY)
	{
		std::cout << lesen << std::endl;
	}

	std::cout << "\nPuffer 2:" << std::endl;
	while (ringChannel.readelement(1, lesen) != ERROR_RINGPUFFER_EMPTY)
	{
		std::cout << lesen << std::endl;
	}

	std::cout << "Puffer 3:" << std::endl;
	while (ringChannel.readelement(2, lesen) != ERROR_RINGPUFFER_EMPTY)
	{
		std::cout << lesen << std::endl;
	}

	system("pause");
}