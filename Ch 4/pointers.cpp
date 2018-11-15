//Samuel Vernaza
//Pointer allocation, use and practice
//This program should be used as a guide for anyone that wants to understand pointers

#include <iostream>

using namespace std;

int main()
{
	int *p_dummy = NULL;
	int dummy = 10;

	p_dummy = &dummy; //dummy now points to the location of dummy

	cout << "Value of dummy: " << dummy << endl; //value of dummy
	cout << "Address of dummy " << &dummy << endl; //address of dummy on heap or free store 

	cout << "Value of p_dummy: " << *p_dummy << endl; //the value that p_dummy points to
	cout << "Address of p_dummy: " << &p_dummy << endl; //proof they don't share an Address

//using memory allocation with new

	int *pNum = new int; //this allocates memory for storage of an int

	//don't do this! pNum = 1000, this would assign a pointer a numeric Value
	*pNum = 300;

	cout << "The value at pNum is: " << *pNum << endl;
	cout << "The address of pNum is: " << pNum << endl;
	cout << "The sizeof pNum is: " << sizeof(pNum) << endl; //this num varies across systems
	cout << "Size of value stored at *pNum is: " << sizeof(*pNum) << endl; //this num varies across systems
	//anytime you use new it's important to delete variables, reduce pointer dangling!
	delete pNum;
	cout << "Done!" << endl;

	return 0;
}
