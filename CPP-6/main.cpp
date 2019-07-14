#include <iostream>
#include "Array.h"
#include "Complex.h"

int main(void) 
{
	Array<int>* myArray = new Array<int>(4);
	(*myArray)[0] = 0;
	(*myArray)[1] = 1;
	(*myArray)[2] = 2;
	(*myArray)[3] = 3;
	myArray->changeSize(5);
	(*myArray)[4] = 4;

	for (int i = 0; i < 5; i++)
	{
		std::cout << (*myArray)[i] << std::endl;
	}

	Array<Complex>* myArray2 = new Array<Complex>(4);
	(*myArray2)[0] = Complex(100,0);
	(*myArray2)[1] = Complex(200, 0);
	(*myArray2)[2] = Complex(300, 0);
	(*myArray2)[3] = Complex(400, 0);
	myArray2->changeSize(5);
	(*myArray2)[4] = Complex(500, 0);

	for (int i = 0; i < 5; i++)
	{
		std::cout << (*myArray2)[i] << std::endl;
	}

	system("Pause");
}