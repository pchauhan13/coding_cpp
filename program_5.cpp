// using various functions available for the string data type

#include <iostream>

using namespace std;

int main()
{
	string phrase = "Giraffe Academy";

	cout << "string: " << phrase << endl;
	cout << "string's length: " << phrase.length() << endl;
	cout << "string indexing: " << phrase[0] << endl;
	phrase[0] = 'B';
	cout << "string changed by index: " << phrase << endl;
	cout << "find character in string: " << phrase.find("Academy", 0) << endl;
	cout << "substring on string: " << phrase.substr(8, 3) << endl;

	string phraseSubStr = phrase.substr(8, 3);
	cout << "stored substring: " << phraseSubStr << endl;

	return 0;
}
