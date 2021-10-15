#include <iostream>
#include"CalculatorSettings.h"

using namespace std;

int main() {
	cout << "Enter the operation" << endl;

	double x = 0.0;
	double y = 0.0;
	char operation;
	double result = 0.0;
	CalculatorSettings c;

	while (true)
	{
		cin >> x >> operation >> y;

		if (y == 0 && operation == '/') {
			cout << "Error in mathematics! " << endl;
			continue;
		}
		else {
			result = c.CalculatorSetting(x, operation, y);
		}
		cout << "Result is equal " << result<<endl;
	}
	return 0;
}