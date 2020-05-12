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

			title = "no title";
			author = "no author";
			pages = 0;
		}

		Book (string aTitle, string aAuthor, int aPages)
		{
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};

int main ()
{
	Book book1;

	book1.title = "Harry Potter";
	book1.author = "JK Rowling";
	book1.pages = 500;

	cout << book1.title << " : " << book1.author << " : " << book1.pages << endl;

	Book book2("Lord of the Rings", "Tolkein", 700);

	cout << book2.title << " : " << book2.author << " : " << book2.pages << endl;

	Book book3;

	cout << book3.title << " : " << book3.author << " : " << book3.pages << endl;

	return 0;
}
