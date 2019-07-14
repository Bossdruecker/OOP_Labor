#include "Newsletter.h"

void Newsletter::attach(Observer* subscriber)
{
	this->subscribers.push_back((Subscriber*)subscriber);
}

void Newsletter::detach(Observer* subscriber)
{
	this->subscribers.remove((Subscriber*)subscriber);
}

void Newsletter::notify()
{
	unsigned int newsletterNumber;
	cin >> newsletterNumber;
	for (Subscriber* subscriber : subscribers) {
		subscriber->update(newsletterNumber);
	}
}