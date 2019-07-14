#include <stdlib.h>
#include <iostream>
#include "MySet.h"
#include "Complex.h"

int main(void) 
{
	MySet<int> menge;
	MySet<int> menge2;
	MySet<Complex> menge3;
	MySet<Complex> menge4;
	menge2.add(13);
	menge2.add(1);
	menge2.add(10);
	menge2.print();
	std::cout << std::endl;
	menge.add(10);
	menge.add(1);
	menge.add(15);
	menge.add(1);
	menge.print();
	std::cout << std::endl;
	menge = menge && menge2;
	menge.print();
	std::cout << std::endl;
	menge3.add(Complex(13, 0));
	menge3.add(Complex(1, 0));
	menge3.add(Complex(10, 10));
	menge3.print();
	std::cout << std::endl;
	menge4.add(Complex(10, 10));
	menge4.add(Complex(1, 0));
	menge4.add(Complex(15, 0));
	menge4.add(Complex(1, 0));
	menge4.print();
	std::cout << std::endl;
	menge4 = menge3 && menge4;
	menge4.print();

	system("Pause");
	return 0;

	system("Pause");
}