//Samuel Vernaza
//Pointer allocation, use and practice

#include <iostream>

using namespace std;

int main()
{
	int *p_dummy = NULL;
	int dummy = 10;

	p_dummy = &dummy; //dummy now points to dummy

	cout << "Value of dummy: " << dummy << endl;
	cout << "Address of dummy " << &dummy << endl;

	cout << "Value of p_dummy: " << *p_dummy << endl;
	cout << "Address of p_dummy: " << &p_dummy << endl;
	return 0;
}
