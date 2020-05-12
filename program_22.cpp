// find the power of a number using for loop

#include <iostream>

using namespace std;

int getResult (int num, int power)
{
	int result = num;

	for (int i = 1; i < power; i++)
	{
		result *= num;
	}
	return result;
}

int main ()
{
	int num, power;

	cout << "Please enter a number: ";
	cin >> num;

	cout << "Please enter the power: ";
	cin >> power;

	cout << num << " raised to the power of " << power << " is " << getResult(num, power) << endl;

	return 0;
}
