#define _USE_MATH_DEFINES
#include "Real.h"
#include <iostream>
using namespace std;
#include <cmath>

void Real::Number::Init(double value)
{
	x = value;
}
void Real::Number::Read()
{
	double x;
	cout << " Enter the value =  "; cin >> x;
	Init(x);
}
void Real::Number::Display() const
{
	cout << toString() << endl;

}
string Real::Number::toString() const
{
	std::string str = "Value is " + std::to_string(x);
	return str;
}

Real::Number Real::Number::Remove(Number l, Number r)
{
	Number t;
	t.x = l.x - r.x;
	return t;
}
Real::Number Real::Number::Multiply(Number l, Number r)
{
	Number t;
	t.x = l.x * r.x;
	return t;
}
// Real metod
void Real::Init(Real::Number value)
{
	SetNumber(value);
}
void Real::Read()
{
	Real::Number n;
	n.Read();
	Init(n);
}
void Real::Display() const
{
	number.Display();
}
double Real::Root(double value)
{
	double result;
	if (GetNumber().GetX() < 0)
	{
		return 0;
	}
	else if (value == 0)
	{
		result = 1;
	}
	else
	{
		result = pow(GetNumber().GetX(), 1 / value);
	}
	return result;
}
double Real::Power(double value)
{
	return pow(M_PI, value);
}