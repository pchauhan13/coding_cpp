// create and use private properties in the class

#include <iostream>

using namespace std;

class Movie
{
	private:
		double rating;
	public:
		string title;
		string director;

		Movie (string aTitle, string aDirector, double aRating)
		{
			title = aTitle;
			director = aDirector;
			setRating(aRating);
		}

		void setRating (double aRating)
		{
			if (aRating > 10.0 || aRating < 1.0)
			{
				cout << "Invalid rating: " << aRating << endl;
			}
			else
			{
				rating = aRating;
			}
		}

		double getRating ()
		{
			return rating;
		}
};

int main ()
{
	Movie avengers("The Avengers", "Joss Whedon", 10.0);

	cout << avengers.title << " : " << avengers.director << endl;

	cout << avengers.getRating() << endl;

	return 0;
}
