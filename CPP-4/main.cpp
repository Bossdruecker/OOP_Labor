#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*
Vorteile:
	-> Obwohl Basisklasse abstrakt ist, k�nnen Zeiger und Referenzen von diesem Typ verwendet werden
	-> Zeiger zeigen nun auf Objekte der abgeleiten Klassen, welche aber nicht abstrakt sind
	-> In einer Schleife k�nnen die draw Methoden aufgerufen werden, egal ob es sich um Dreiecke, Rechtecke oder Kreise handelt

Welche OO-Prinzipien kommen hier zur Anwendung?
	-> �berschreiben von Funktionen
	-> Prinzip der Vererbung Abstrakte Klassen

Wie hoch sch�tzen Sie den Mehraufwand, wenn noch zus�tzlich eine Klasse Linie hinzugef�gt wird?
	-> der Aufwand ist genau so hoch wie f�r die anderen Klassen man muss Konstruktor und Destruktor sowie die draw() Funktion implementieren

Wieso muss Shape einen virtuellen Destruktor haben?
	-> das ist wichtig das wenn wir den Destructor von Shape aufrufen der Destruktor der Kindklasse aufgerufen wird sonst kann es zu Speicher legs kommen

Nennen Sie weitere Anwendungsgebiete f�r dynamischen Polymorphismus
	-> er wird meistens dort eingesetzt wenn Programme im sp�teren Verlauf erweitert werden m�ssen oder es noch nicht ganz abzusehen ist wie viele Klassen erstellt werden m�ssen
*/

void main()
{
	Shape* pShapes[10];

	pShapes[0] = (Shape*)new Triangle();
	pShapes[1] = (Shape*)new Rectangle();
	pShapes[2] = (Shape*)new Circle();
	pShapes[3] = (Shape*)new Triangle();
	pShapes[4] = (Shape*)new Circle();
	pShapes[5] = (Shape*)new Triangle();
	pShapes[6] = (Shape*)new Rectangle();
	pShapes[7] = (Shape*)new Circle();
	pShapes[8] = (Shape*)new Rectangle();
	pShapes[9] = (Shape*)new Triangle();

	for (int i = 0; i < 10; i++) {
		pShapes[i]->draw();
	}
	using namespace std;
	cout << "Anzahl der Instanzen: " << pShapes[0]->get() << endl;

	delete pShapes[0];
	delete pShapes[5];

	cout << "Anzahl der Instanzen: " << pShapes[0]->get() << endl;

	system("pause");
}