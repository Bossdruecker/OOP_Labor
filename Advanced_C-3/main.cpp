#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	•Programmcode einer Funktion befindet sich im RAM! 
	•Einstiegspunkt ist durch eineAdresse festgelegt
	•Aufruf geschieht über dieseAdresse 
		-> “statisch”: Linker fügt absolute Adresse beim Sprungbefehl ein - Funktionsaufruf 
		-> “dynamisch”: Adresse wird zur Laufzeit ermittelt - Funktionszeiger

*/

int main(int argc, char* argv[])
{
	char** ac;
	char** ac2;

	ac = (char**)malloc(sizeof(char*) * (argc-1));

	printf("Anzahl der Parameter: %d\n\n", argc);

	for (int i = 0; i < argc - 1; i++)
	{
		*(ac + i) = (char*)malloc(strlen(argv[i + 1]) + 1);
		strcpy(*(ac + i), argv[i + 1]);
	}

	ac2 = ac;

	for (int i = 0; i < argc - 1; i++)
	{
		printf("Parameter in Pointer: %s\n", *ac2);
		ac2++;
		free(*(ac + i));
		
	}

	

	printf("\n");
	system("PAUSE");
	return 0;
}