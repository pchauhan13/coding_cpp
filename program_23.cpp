// create and use 2d arrays in c++

#include <iostream>

using namespace std;

int main ()
{
	int numberGrid[][2] = {
		{ 1, 2 },
		{ 3, 4 },
		{ 5, 6 }
	};

	cout << numberGrid[2][1] << endl;

	return 0;
}
