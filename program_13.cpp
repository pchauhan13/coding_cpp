// create and use functions in c++

#include <iostream>

using namespace std;

void sayHi ()
{
	cout << "Hello User" << endl;
}

void sayName (string name)
{
	cout << "Hello " << name << endl;
}

int main()
{
	sayHi();
	sayName("Prashant");

	return 0;
}
