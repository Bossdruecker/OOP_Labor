#include <stdio.h>
#include <stdlib.h>

/*	Vorteil Makro : 
		• Code wird durch Präprozessor ersetzt, d.h.kein Funktionsaufruf und daher schneller
	Nachteil Makro : 
		• Code wird durch Präprozessor ersetzt, d.h.Programm wird größer 
		• Typsicherheit ist nicht garantiert 
		• Nebeneffekte sind zu berücksichtigen
*/
#define MAXVALUE(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int iwert1 = 100;
	int iwert2 = -1000;
	unsigned int uiwert3 = 1;

	printf("wert1: %d wert2: %d\n", iwert1, iwert2);
	printf("int MAX int: %d\n", MAXVALUE(iwert1, iwert2));

	printf("wert1: %d wert2: %d\n", iwert1, uiwert3);
	printf("int MAX uint: %d\n", MAXVALUE(iwert1, uiwert3));

	printf("wert1: %d wert2: %d\n", uiwert3, iwert2);
	printf("int MAX uint: %d\n", MAXVALUE(uiwert3, iwert2));

	system("PAUSE");
	return 0;
}