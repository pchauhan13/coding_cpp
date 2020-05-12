// using addresses and pointers of variables

#include <iostream>

using namespace std;

int main ()
{
	int age = 19;
	double gpa = 2.7;
	string name = "Mike";

	cout << "address of age variable: " << &age << endl;
	cout << "address of gpa variable: " << &gpa << endl;
	cout << "address of name variable: " << &name << endl;

	int *pAge = &age;
	double *pGpa = &gpa;
	string *pName = &name;

	cout << "value of pointer of age: " << pAge << endl;
	cout << "value of pointer of gpa: " << pGpa << endl;
	cout << "value of pointer of name: " << pName << endl;

	cout << "age: " << age << endl;
	cout << "&age: " << &age << endl;
	cout << "*&age: " << *&age << endl;
	cout << "&*&age: " << &*&age << endl;

	return 0;
}
