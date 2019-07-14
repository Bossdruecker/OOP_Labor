#pragma once

#include <iostream>

class Complex
{
public:
	Complex();
	Complex(double real, double img);
	Complex(const Complex& copyComplex);
	~Complex();
	void setReal(double real);
	void setImg(double img);
	double getReal();
	double getImg();
	double getWinkel();
	double getBetrag();
	void print();
	Complex operator + (Complex a);
	Complex operator - (Complex a);
	Complex operator * (Complex a);
	Complex operator / (Complex a);
	Complex operator ! ();
	friend std::ostream& operator<<(std::ostream& ostr, const Complex& c);

	class Exception
	{

	};

private:
	double real;
	double img;

};

#include "Complex.h"
#include <math.h>
#include <stdlib.h>
#include <iostream>

#define PI 3.14159265358979323846

Complex::Complex()
{
}

Complex::Complex(double real, double img)
{
	this->real = real;
	this->img = img;
}

Complex::Complex(const Complex& copyComplex)
{
	this->real = copyComplex.real;
	this->img = copyComplex.img;
}


Complex::~Complex()
{
}

void Complex::setReal(double real)
{
	this->real = real;
}

void Complex::setImg(double img)
{
	this->img = img;
}

double Complex::getReal()
{
	return this->real;
}

double Complex::getImg()
{
	return this->img;
}

double Complex::getWinkel()
{
	return  360. / (2 * PI) * atan2(this->img, this->real);
}

double Complex::getBetrag()
{
	return sqrt(this->real * this->real + this->img * this->img);
}

void Complex::print()
{
	std::cout << "real: " << this->real << "img: " << this->img << std::endl;
}

Complex Complex::operator+(Complex a)
{
	Complex temp(0, 0);
	temp.real = real + a.real;
	temp.img = img + a.img;

	return temp;
}

Complex Complex::operator-(Complex a)
{
	Complex temp(0, 0);
	temp.real = real - a.real;
	temp.img = img - a.img;

	return temp;
}

Complex Complex::operator*(Complex a)
{
	Complex temp(0, 0);
	temp.real = real * a.real - img * a.img;
	temp.img = real * a.img + img * a.real;

	return temp;
}

Complex Complex::operator/(Complex a)
{
	try
	{
		Complex temp(0, 0);
		temp.real = (real * a.real + img * a.img) / (a.real * a.real + a.img * a.img);
		temp.img = (img * a.real - real * a.img) / (a.real * a.real + a.img * a.img);
		if (real == 0)
		{
			throw Exception();
		}
		return temp;
	}
	catch (Exception * e1)
	{
		std::cout << "Division durch 0!" << std::endl;
	}
}

Complex Complex::operator!()
{
	Complex temp(0, 0);
	temp.real = real;
	temp.img = (-1) * img;
	return temp;
}

std::ostream & operator<<(std::ostream & ostr, const Complex & c)
{
	ostr << c.real << "+j" << c.img;
	return ostr;
}


