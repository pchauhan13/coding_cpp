// print the name of the day based on the number given by the user

#include <iostream>

using namespace std;

string getDayName (int num)
{
	string result;

	switch (num)
	{
		case 1:
			result = "Sunday";
			break;
		case 2:
			result = "Monday";
			break;
		case 3:
			result = "Tuesday";
			break;
		case 4:
			result = "Wednesday";
			break;
		case 5:
			result = "Thursday";
			break;
		case 6:
			result = "Friday";
			break;
		case 7:
			result = "Saturday";
			break;
		default:
			result = "Unknown";
	}

	return result;
}

int main ()
{
	int num;

	cout << "Please enter a number: ";
	cin >> num;

	cout << num << " corresponds to " << getDayName(num) << endl;

	return 0;
}
