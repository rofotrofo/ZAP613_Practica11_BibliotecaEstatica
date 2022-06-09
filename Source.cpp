//Source.cpp
//compile with: cl /c /EHsc Source.cpp
//Post-build command: lib Object.obj

#include "Header.h"

namespace Header
{
	double Arithmetic::Add(double a, double b)
	{
		return a + b;
	}
	double Arithmetic::Subtract(double a, double b)
	{
		return a - b;
	}
	double Arithmetic::Multiply(double a, double b)
	{
		return a * b;
	}
	double Arithmetic::Divide(double a, double b)
	{
		return a / b;
	}
}