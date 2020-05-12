// add constructor to the class

#include <iostream>

using namespace std;

class Book
{
	public:
		string title;
		string author;
		int pages;

		Book ()
		{
			cout << "Creating a Book Object" << endl;
		}
};

int main ()
{
	Book book1;

	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	cout << book1.title << " : " << book1.author << " : " << book1.pages << endl;

	return 0;
}
