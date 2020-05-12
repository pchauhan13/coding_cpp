// create a game in c++

#include <iostream>

using namespace std;

int main()
{
	string color;
	string noun;
	string celebrity;

	cout << "Please enter a color: ";
	cin >> color;

	cout << "Please enter a noun: ";
	cin >> noun;

	cout << "Please enter a celebrity name: ";
	cin >> celebrity;

	cout << "Roses are " << color << endl;
	cout << noun << " are blue" << endl;
	cout << "I love " << celebrity << endl;

	return 0;
}
