#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>

#include "Subscriber.h"

using namespace std;

class UI
{
private:
	static UI* instance;
	UI();
	UI(const UI& singletonInstance);
	void setCursorPosition(unsigned int x, unsigned int y);
	void drawMenuBar();
	void drawSubscriberBar(const vector<Subscriber*>& list);

public:
	static UI* createInstance();
	void drawUI(const vector<Subscriber*>& list);

};