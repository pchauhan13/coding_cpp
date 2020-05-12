// create and use functions with return statement

#include <iostream>

using namespace std;

double cube (double num)
{
	double result = num * num * num;
	return result;
}

int main ()
{
	double num;

	cout << "Please enter a number: ";
	cin >> num;

	cout << "Cube of " << num << " is " << cube(num) << endl;

	return 0;
}
