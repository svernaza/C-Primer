//Samuel Vernaza
//Little program to demonstrate major differences between the string library and arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arrSize = 20;
	char arr1[arrSize];
	char arr2[] = "Old McDonald";
	char arr3[arrSize];
	string str1;
	string str2 = "Farmer John";
	string str3;

	//assignment example
	cout << "str2 is: " << str2 << endl;
	cout << "Using string object assignment copying str2 to str1: " << endl;
	str1 = str2; //string assignment
	cout << "Str1 is now: " << str1 << endl;

	//use of getline()
	cout << "Using getline to get a multi word user input\n";
	cout << "Enter your full name: \n";
	cin.getline(arr1, arrSize);
	cout << "You've entered: \n";
	cout << arr1;

	//use of strcpy and overloaded assignment operator
	cout << "\nCopying contents of arr2 into arr3\n";
	strcpy(arr3, arr2);
	cout << "arr3 is now: " << arr3 << endl;

	cout << "\nCopying one string to another \n";
	str3 = str2;
	cout << "\nStr 3 is now: " << str3 << endl;

	cout << "\nNow, concatenation! " << endl;
	str1 += str2;
	cout << "Str1 is now: " << str1 << endl;

	strcat(arr1, arr2);
	cout << "\narr1 is now " << arr1 << endl;
	cout << "Done! " << endl;

	//example of output;
	return 0;
}
