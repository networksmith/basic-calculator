#include <iostream>

// get numbers
double getNumbers()
{
	std::cout << "Enter a number: ";
	double x;
	std::cin >> x;
	return x;
}
// get operator
char operation()
{
	std::cout << "Enter an operator: ";
	char operation;
	std::cin >> operation;
	return operation;
}
//check operator and print result
void printResult(double x, char operation, double y)
{
	if (operation == '+')
	{
		std::cout << x << "+" << y << " is " << x + y;
    }
	else if (operation == '-')
	{
		std::cout << x << "-" << y << " is " << x - y;
	}
	else if (operation == '*')
	{
		std::cout << x << "*" << y << " is " << x * y;
	}
	else if (operation == '/')
	{
		std::cout << x << "/" << y << " is " << x / y;
	}
}
// main function
void main() {
	double x{ getNumbers() };
	double y{ getNumbers() };

	char op{ operation() };

	printResult(x, op, y);
}