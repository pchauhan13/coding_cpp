// return larger number using function

#include <iostream>

using namespace std;

int getMax (int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

int main ()
{
	int num1, num2;

	cout << "Please enter two numbers: ";
	cin >> num1 >> num2;

	cout << "Larger number is: " << getMax(num1, num2) << endl;

	return 0;
}
