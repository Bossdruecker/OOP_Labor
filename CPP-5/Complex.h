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

