#pragma once
class Ringpuffer
{
public:
#define ERROR_RINGPUFFER_EMPTY -1
#define ERROR_RINGPUFFER_FULL -2
#define DEFAULT 0;

public:
	Ringpuffer();
	~Ringpuffer();

	int readelement(int& ielement);
	int storeelement(int ielement);
private:
	unsigned int uispos;
	unsigned int uirpos;
	unsigned int uinumelements;
	unsigned int iarray[8];
};

