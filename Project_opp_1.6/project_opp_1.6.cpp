#include "Real.h"
#include <iostream>
using namespace std;

int main()
{
	Real::Number a, b, c, d;
	Real r;
	a.Read();
	a.Display();
	b.Read();
	b.Display();
	c = Real::Number::Remove(a, b);
	d = Real::Number::Multiply(a, b);
	cout << " Remove Value =  " << c.GetX() << endl;
	cout << " Value Multiplication =  " << d.GetX() << endl;
	r.Read();
	r.Display();
	double value;
	double power;
	cout << " Enter the power for the roots = "; cin >> value;
	cout << "The root of a given power = " << r.Root(value) << endl;
	cout << " Enter the power  = "; cin >> power;
	cout << "Pi to the power equals  =  " << r.Power(power) << endl;
	cin.get();
	return 0;
}