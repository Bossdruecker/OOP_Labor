#include "Triangle.h"

Triangle::Triangle() {
	innumberofinstances++;
}

Triangle::~Triangle() {
	innumberofinstances--;
}

void Triangle::draw() {
	std::cout << "Triangle" << std::endl;
}