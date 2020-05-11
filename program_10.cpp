// perform basic operations on user input numbers

#include <iostream>

using namespace std;

int main()
{
	double num1, num2;

	cout << "Please enter first number: ";
	cin >> num1;

	cout << "Please enter second number: ";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

	return 0;
}
