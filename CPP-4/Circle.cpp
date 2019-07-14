#include "Circle.h"

Circle::Circle()
{
	innumberofinstances++;
}

Circle::~Circle()
{
	innumberofinstances--;
}

void Circle::draw()
{
	std::cout << "Circle" << std::endl;
}
