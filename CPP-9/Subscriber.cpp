#include "Subscriber.h"

Subscriber::Subscriber()
{
	this->currentNewsletter = 0;
	this->subState = false;
}

Subscriber::~Subscriber()
{
}

Subscriber::Subscriber(const Subscriber& subscriber)
{
	this->currentNewsletter = subscriber.currentNewsletter;
}

unsigned int Subscriber::get()
{
	return this->currentNewsletter;
}

void Subscriber::update(unsigned int number)
{
	this->currentNewsletter = number;
}

void Subscriber::setSubState(bool state)
{
	this->subState = state;
}

bool Subscriber::getSubState()
{
	return this->subState;
}

string Subscriber::getSubStateAsString()
{
	return subState == true ? "abonn." : "deabo.";
}

bool Subscriber::operator==(const Subscriber& sub)
{
	return this == &sub;
}
