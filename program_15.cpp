// using if statement

#include <iostream>

using namespace std;

int main ()
{
	bool isMale = true;
	bool isTall = true;

	if (isMale)
	{
		cout << "You are a male" << endl;
	}
	else
	{
		cout << "You are not a male" << endl;
	}

	if (isMale && isTall)
	{
		cout << "You are a tall male" << endl;
	}
	else if (isMale)
	{
		cout << "You are a male" << endl;
	}
	else if (isTall)
	{
		cout << "You are tall" << endl;
	}
	else
	{
		cout << "You are neither tall nor male" << endl;
	}

	return 0;
}
