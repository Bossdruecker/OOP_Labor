#include "Rectangle.h"

Rectangle::Rectangle()
{
	innumberofinstances++;
}

Rectangle::~Rectangle()
{
	innumberofinstances--;
}

void Rectangle::draw()
{
	std::cout << "Rectangle" << std::endl;
}
