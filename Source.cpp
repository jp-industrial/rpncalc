#include "c:\Users\James\Desktop\std_lib_facilities.h"

int main()
{
	//basic calculator (polish notation)

	vector <int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	string num1 = 0;
	string num2 = 0;
	char operat = ' ';

	cout << "Please enter two numbers followed by the desired operator. For example: 5 5 +.\n"
		<< "Available operations: \nAddition (+)\n"
		<<"Subtraction(-)\n"
		<<"Division(/) \n"
		<<"Multiplication(*)\n";

	while (cin >> num1 >> num2 >> operat) {

		for (int i = 0; i < numbers.size(); ++i) {

		}

		if (num1 == "zero") //string to integer conversion table
			num1 = numbers[0];
		else if (num1 == "one")
			num1 = numbers[1];
		else if (num1 == "two")
			num1 = numbers[3];
		else if (num1 == "three")
			num1 = 3;
		else if (num1 == "four")
			num1 = 4;
		else if (num1 == "five")
			num1 = 5;
		else if (num1 == "six")
			num1 = 6;
		else if (num1 == "seven")
			num1 = 7;
		else if (num1 == "eight")
			num1 = 8;
		else if (num1 == "nine")
			num1 = 9;

		switch (operat) {
		case'+':
			cout << num1 + num2 << "\n";
			break;

		case '-':
			cout << num1 - num2 << "\n";
			break;

		case '/':
			cout << num1 / num2 << "\n";
			break;

		case '*':
			cout << num1 * num2 << "\n";

		default:
			cout << "Operator not recognised.\n";
			break;
		}
	}
}