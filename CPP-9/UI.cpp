#include "UI.h"

UI* UI::instance = 0;

UI::UI()
{
	SMALL_RECT r = { 0, 0, 100, 20 };
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &r);
}

UI* UI::createInstance()
{
	if (instance == 0) {
		instance = new UI();
	}
	return instance;
}

void UI::drawUI(const vector<Subscriber*>& list)
{
	drawMenuBar();
	drawSubscriberBar(list);
	this->setCursorPosition(0, 9);
}

void UI::drawMenuBar()
{
	this->setCursorPosition(0, 0);
	cout << "--- Menu --------------------------------------------------------------------------------------------" << endl;
	this->setCursorPosition(15, 2);
	cout << "Toogle subscription of #1: 1" << "        " << "Toogle subscription of #2: 2" << endl;
	this->setCursorPosition(15, 3);
	cout << "Toogle subscription of #3: 3" << "        " << "Toogle subscription of #4: 4" << endl;
	this->setCursorPosition(15, 4);
	cout << "Create new newsletter: n" << "            " << "Exit: e" << endl;
	this->setCursorPosition(0, 6);
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
}

void UI::drawSubscriberBar(const vector<Subscriber*>& list)
{
	this->setCursorPosition(0, 16);
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
	cout << "| Subscriber #1          | Subscriber #2          | Subscriber #3          | Subscriber #4          |" << endl;
	cout << "| State: " << list.at(0)->getSubStateAsString() << "          ";
	cout << "| State: " << list.at(1)->getSubStateAsString() << "          ";
	cout << "| State: " << list.at(2)->getSubStateAsString() << "          ";
	cout << "| State: " << list.at(3)->getSubStateAsString() << "          |" << endl;
	cout << "| Cur. newsletter: " << list.at(0)->get() << "     ";
	cout << "| Cur. newsletter: " << list.at(1)->get() << "     ";
	cout << "| Cur. newsletter: " << list.at(2)->get() << "     ";
	cout << "| Cur. newsletter: " << list.at(3)->get() << "     |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------" << endl;
}

void UI::setCursorPosition(unsigned int x, unsigned int y)
{
	COORD SIZE_COORD = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), SIZE_COORD);
}