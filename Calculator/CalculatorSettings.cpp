#include "CalculatorSettings.h"

double CalculatorSettings::CalculatorSetting(double x, char operand, double y)
{
	double sum;
	switch (operand)
	{
	case '+':
		sum = x + y;
		return sum;
	case '-':
		sum = x - y;
		return sum;
	case'/':
		sum = x / y;
		return sum;
	case '*':
		sum = x * y;
		return sum;
	default:
		return 0.0;
	}
}

