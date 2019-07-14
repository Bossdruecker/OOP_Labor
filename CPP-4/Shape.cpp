#include "Shape.h"

int Shape::innumberofinstances = 0;

Shape::Shape() {}

Shape::~Shape() {}

int Shape::get()
{
	return innumberofinstances;
}
