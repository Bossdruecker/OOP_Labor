#include "Ringpuffer.h"



Ringpuffer::Ringpuffer()
{
	uispos = uirpos = uinumelements = 0;
}


Ringpuffer::~Ringpuffer()
{

}

int Ringpuffer::readelement(int& ielement)
{
	if (uinumelements > 0)
	{
		ielement = iarray[uirpos];
		iarray[uirpos] = DEFAULT;	//optional nur um besser zu sehen
		uinumelements--;
		uirpos = (++uirpos) % 8;
		return 0;
	}
	return ERROR_RINGPUFFER_EMPTY;
}

int Ringpuffer::storeelement(int ielement)
{
	if (uinumelements < 8) {
		iarray[uispos] = ielement;
		uinumelements++;
		uispos = (++uispos) % 8;
		return 0;
	}
	return ERROR_RINGPUFFER_FULL;
}
