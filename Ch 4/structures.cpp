//Samuel Vernaza
//Structures practice and basic functionalities

#include <iostream>

using namespace std;

struct Cheetos
{
	char name [20];
	float volume;
	double price;

};

//prototype for a simple display function
void display(Cheetos myCheetos);

int main()
{
	//struct declaration
	Cheetos myCheetos;

	cout << "\nEnter the type of Cheetos: ";
	cin.getline(myCheetos.name, 20);

	cout << "Passed" << endl;

	cout << "\nHow many ounces is this bag (1.3, 2.4, 5.9)?" << endl;
	cin >> myCheetos.volume;

	cout << "\nHow much does this bag of Cheetos cost? (#s only)" << endl;
	cin >> myCheetos.price;

	cout << "An alternative assignment method: " << endl;
	Cheetos myCheetos2 = 
	{
		"Lime Cheetos",
		2.4,
		5.99
	};

	display(myCheetos);
	cout << "Alternative Method: " << endl;
	display(myCheetos2);

	return 0;
}

//display function, chose to omit the 0 preciscion and trailing zeros
void display(Cheetos myCheetos)
{
	cout << "--------------------------------" << endl;
	cout << "\nCheeto Information: " << endl;
	cout << "Name: " << myCheetos.name << endl;
	cout << "Volume: " << myCheetos.volume << endl;
	cout << "Price: $" << myCheetos.price << endl;
	cout << "---------------------------------" << endl;
}
