#pragma once
#include <list>
#include <iostream>

#include "Subscriber.h"
#include "Observable.h"

using namespace std;

class Newsletter : public Observable
{

private:
	list<Subscriber*> subscribers;

public:
	void attach(Observer* subscriber);
	void detach(Observer* subscriber);
	void notify();

};

