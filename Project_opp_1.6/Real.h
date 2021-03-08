#pragma once
#include <cmath>
#include <string> 
#include <sstream>
using namespace std;

class Real
{
public:
	class Number
	{
		double x;
	public:
		double GetX() const { return x; }
		void SetX(double value) { x = value; }
		void Init(double);
		void Read();
		void Display() const;
		string toString() const;
		static Number Remove(Number l, Number r);
		static Number Multiply(Number l, Number r);
	};
	Real::Number GetNumber() const { return number; }
	void SetNumber(Real::Number value) { number = value; }
	void Init(Real::Number);
	void Display() const;
	void Read();
	double Root(double value);
	static double Power(double value);
private:
	Number number;
};

