// create and use arrays in c++

#include <iostream>

using namespace std;

int main()
{
	int luckyNums[] = {4, 8, 15, 16, 23, 42};

	cout << luckyNums[2] << endl;

	luckyNums[2] = 432;

	cout << luckyNums[2] << endl;

	return 0;
}
