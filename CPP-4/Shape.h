#pragma once
#include<iostream>

class Shape
{
public:
public:
	Shape();
	virtual ~Shape();
	int get();

	void virtual draw() = 0;
protected:
	static int innumberofinstances;
};

