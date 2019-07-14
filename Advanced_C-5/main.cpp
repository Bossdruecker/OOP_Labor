#include <stdio.h>
#include <stdlib.h>

/*	
	Probleme:	Jeder Funktionsaufruf kostet Zeit, da Daten auf den Stack abgelegt werden müssen! 
				Programm-Code soll nicht mehrfach verhanden sein!
	Lösung:		Inline Funktion nur einmal im Sourcecode vorhanden! Im Maschinencode jedoch mehrfach, 
				da Inline Funktion in die aufrufenden Funktionen “reinkopiert” wird (wie bei Makros) 
				Aber: 
					-> Der Compiler entscheidet, ob überhaupt ein “Inlining” sinnvoll ist. 
					Je nach Compiler kann man aber auch ein “Inlining” erzwingen: inline voidfoo(constchar) __attribute__((always_inline));
	Ergebniss:	 SchnellereAusführung Schwächen von Makros werden damit umgangen (Typsicherheit)

	Vorteil:	Kein Funktionsaufruf ist notwendig dadurch schneller.
				Variablen müssen nicht auf den Funktionsstack geschoben bzw. wieder von ihm entfernt werden.
				Die Funktion benötigt keinen Rückgabewert.
				Der Befehlscache kann optimaler verwendet werden. Neue Befehle müssen nicht umständlich geladen, sondern können sofort ausgeführt werden.

	Nachteil:	Die Größe der ausführbaren Datei wächst.

*/

inline int quadrat(int x) 
{
	return (x * x);
}

inline int c(int a, int b)
{
	return quadrat(a) + quadrat(b);
}

int main(void)
{
	int a, b;
	printf("Bitte geben sie ein Int ein: ");
	scanf_s("%d", &a);

	printf("Bitte geben sie ein Int ein: ");
	scanf_s("%d", &b);

	printf("(%d ^ 2) + (%d ^ 2) = %d\n",a,b, c(a, b));
	system("pause");

	return 0;
}