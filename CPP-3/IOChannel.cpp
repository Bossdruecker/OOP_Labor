#include "IOChannel.h"



IOChannel::IOChannel()
{
}


IOChannel::~IOChannel()
{
}

int IOChannel::readelement(unsigned int uichannel, int& ielement)
{
	if (uichannel < 3) 
	{
		return ringArray[uichannel].readelement(ielement);
	}
	else
	{
		return ERROR_CHANNEL_NOT_DEFINE;
	}
}

int IOChannel::storeelement(unsigned int uichannel, int ielement)
{
	if (uichannel < 3)
	{
		return ringArray[uichannel].storeelement(ielement);
	}
	else
	{
		return ERROR_CHANNEL_NOT_DEFINE;
	}
}
