#pragma once
#include <vector>
#include <iostream>

#include "UI.h"
#include "Subscriber.h"
#include "Newsletter.h"

using namespace std;

void updateSubscriber(int i);

vector<Subscriber*> subscriberList;
UI* ui;
Newsletter newsletter;

int main()
{
	subscriberList.push_back(new Subscriber());
	subscriberList.push_back(new Subscriber());
	subscriberList.push_back(new Subscriber());
	subscriberList.push_back(new Subscriber());

	ui = UI::createInstance();
	ui->drawUI(subscriberList);

	bool exit = false;

	while (!exit) {
		unsigned char letter;
		cin >> letter;

		switch (letter)
		{
		case '1':
			updateSubscriber(0);
			break;
		case '2':
			updateSubscriber(1);
			break;
		case '3':
			updateSubscriber(2);
			break;
		case '4':
			updateSubscriber(3);
			break;
		case 'e':
			exit = true;
			break;
		case 'n':
			newsletter.notify();
			ui->drawUI(subscriberList);
			break;
		default:
			break;
		}
	}

	return 0;
}

void updateSubscriber(int i)
{
	if (subscriberList[i]->getSubState()) {
		subscriberList[i]->setSubState(false);
		newsletter.detach(subscriberList[i]);
	}
	else {
		subscriberList[i]->setSubState(true);
		newsletter.attach(subscriberList[i]);
	}
	ui->drawUI(subscriberList);
}