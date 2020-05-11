// get the input from the user using getline

#include <iostream>

using namespace std;

int main()
{
	string name;

	cout << "Please enter your name: ";
	getline(cin, name);

	cout << "Hello " << name << endl;

	return 0;
}
