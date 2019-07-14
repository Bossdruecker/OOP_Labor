#pragma once
#include <string>

#include "Observer.h"

using namespace std;

class Subscriber : public Observer
{

private:
	unsigned int currentNewsletter;
	bool subState;

public:
	Subscriber();
	~Subscriber();
	Subscriber(const Subscriber& subscriber);
	unsigned int get();
	void update(unsigned int number);
	void setSubState(bool state);
	bool getSubState();
	string getSubStateAsString();
	bool operator==(const Subscriber& sub);

};

