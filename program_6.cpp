// working with different type of numbers

#include <iostream>

using namespace std;

int main()
{
	cout << "5 + 7 = " << (5 + 7) << endl;
	cout << "5 - 7 = " << (5 - 7) << endl;
	cout << "5 * 7 = " << (5 * 7) << endl;
	cout << "5 / 7 = " << (5 / 7) << endl;
	cout << "5 % 7 = " << (5 % 7) << endl;

	int wnum = 5;
	double dnum = 5.5;

	cout << "wnum: " << wnum << endl;
	cout << "dnum: " << dnum << endl;

	cout << "wnum++: " << wnum++ << endl;
	cout << "++wnum: " << ++wnum << endl;
	cout << "wnum--: " << wnum-- << endl;
	cout << "--wnum: " << --wnum << endl;

	cout << "wnum + dnum: " << (wnum + dnum) << endl;

	return 0;
}
