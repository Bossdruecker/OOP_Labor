#include <stdlib.h>
#include <iostream>
#include <conio.h>

//Namespaces
namespace na1 {
	void callByReference2(int&);
	void callByReference(int*);
	//default-Werte
	int defaultValue(int, int, int = 1, int = 1);			// Deklaration in Definition !!
	long getmax(long, long, long);
	int getmax(int, int, int);
}

//Funktionstemplates
template <class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <class abc>
abc addieren(abc a, abc b) {
	return a + b;
}


int main(void) {
	int x = 4;
	int y = 10;

	double dx = 2.2564f;
	double dy = 232.12154f;

	//Namespace
	{
		using namespace std;

		int a = 2005;
		cout << "Value bevor callByReference2: " << a << endl;
		na1::callByReference2(a);
		cout << "Value after callByReference2: " << a << endl;

		cout << "Value bevor callByReference: " << a << endl;
		na1::callByReference(&a);
		cout << "Value after callByReference: " << a << endl;

		cout << "Ergebniss = defaultValue(1, 2, 3, 4) = " << na1::defaultValue(1, 2, 3, 4) << endl;

		cout << "Ergebniss = defaultValue(1, 2, 3) = " << na1::defaultValue(1, 2, 3) << endl;

		cout << "Ergebniss = defaultValue(1, 2) = " << na1::defaultValue(1, 2) << endl;

		cout << "der groeste Wert aus diesen Zahlen 2147483640, 2147483630, 2147483620 ist: ";
		na1::getmax(2147483640l, 2147483630l, 2147483620l);

		cout << "der groeste Wert aus diesen Zahlen 2, 3, 5 ist: ";
		na1::getmax(2, 3, 5);

	}

	std::cout << "before: swap(4, 10) x = " << x << " y = " << y << std::endl;
	swap(x, y);
	std::cout << "after: swap(4, 10) x = " << x << " y = " << y << std::endl;

	std::cout << "before: swap(2.2564f, 232.12154f) x = " << dx << " y = " << dy << std::endl;
	swap(dx, dy);
	std::cout << "after: swap(2.2564f, 232.12154f) x = " << dx << " y = " << dy << std::endl;

	std::cout << "ergebnis float: " << addieren(5.23, 6.235) << std::endl;
	std::cout << "ergebnis int: " << addieren(4, 6) << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}

void na1::callByReference2(int& a) {
	a = 2000;
}

//Call by Reference
void na1::callByReference(int* wert)
{
	*wert = *wert * 2;
}

int na1::defaultValue(int b, int c, int d, int e) {
	int erg;

	erg = b + c + d + e;

	return erg;
}

//überladen von Funktionen
long na1::getmax(long a, long b, long c) {
	if (a > b && a > c) {
		std::cout << a << " getmax (long)" << std::endl;
		return a;
	}
	if (b > a && b > c) {
		std::cout << b << " getmax (long)" << std::endl;
		return b;
	}
	else {
		std::cout << c << " getmax (long)" << std::endl;
		return c;
	}
}

int na1::getmax(int a, int b, int c) {
	if (a > b && a > c) {
		std::cout << a << " getmax (int)" << std::endl;
		return a;
	}
	if (b > a && b > c) {
		std::cout << b << " getmax (int)" << std::endl;
		return b;
	}
	else {
		std::cout << c << " getmax (int)" << std::endl;
		return c;
	}
}