#include<iostream>
#include<conio.h>

unsigned int app(unsigned short int us1, unsigned short int us2)
{
	//	0000 0000
	//  0000 1010	<< 4 bitshift um vier bit
	//  1010 0000	+ andere Short variable
	//  1010 0110

	/*unsigned int ui1;
	ui1 = us1 << 16;
	ui1 = ui1 + us2;*/

	unsigned int ui1 = us1 << 16;
	ui1 += us2;

	return ui1;
}

unsigned int app2(unsigned short int us1, unsigned short int us2)
{
	//	0000 0000
	//  0000 1010	<< 4 bitshift um vier bit
	//  1010 0000	+ andere Short variable
	//  1010 0110

	unsigned int ui1;
	ui1 = us2 << 16;
	ui1 = ui1 + us1;

	return ui1;
}

void main()
{
	unsigned short int us1 = 452;
	unsigned short int us2 = 950;
	unsigned int (*pointerApp)(unsigned short int, unsigned short int);
	pointerApp = &app;
	printf("Ergebniss von us1: %x und us2: %x \nist ui1: %x", us1, us2, pointerApp(us1, us2));	//us1 und us2 als Hexawert zeigen dann ergebnis per funktionsaufruf mit pointer zeigen
	pointerApp = &app2;
	printf("Ergebniss von us1: %x und us2: %x \nist ui1: %x", us1, us2, pointerApp(us1, us2));	//us1 und us2 als Hexawert zeigen dann ergebnis per funktionsaufruf mit pointer zeigen
	system("Pause");
}