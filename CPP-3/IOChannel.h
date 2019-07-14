#pragma once

#include "Ringpuffer.h"
#include <iostream>

#define ERROR_CHANNEL_NOT_DEFINE -3;

class IOChannel
{
public:
	IOChannel();
	~IOChannel();
	int readelement(unsigned int uichannel, int& ielement);
	int storeelement(unsigned int uichannel, int ielement);

	Ringpuffer ringArray[3];
};