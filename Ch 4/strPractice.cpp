//Samuel Vernaza
// This program demonstrates the differences between using char and string

#include <iostream>
#include <string>
#include <cstring>

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
	cout << "\nstr2 is: " << str2 << endl;
	cout << "\nUsing string object assignment copying str2 to str1: " << endl;
	str1 = str2; //string assignment
	cout << "\nStr1 is now: " << str1 << endl;

	//use of getline()
	cout << "\nUsing getline to get a multi word user input\n";
	cout << "\nEnter your full name: \n";
	cin.getline(arr1, arrSize);
	cout << "\nYou've entered: " << arr1 << endl;

	//use of strcpy and overloaded assignment operator
	cout << "\nCopying contents of arr2 into arr3\n";
	strcpy(arr3, arr2);
	cout << "\narr3 is now: " << arr3 << endl;

	//copying string to another string using assingment operator
	cout << "\nCopying one string to another \n";
	str3 += str2;
	cout << "\nStr 3 is now: " << str3 << endl;

	//concatenates str2 to str1 (no spaces)
	cout << "\nNow, concatenation! " << endl;
	str1 += str2;
	cout << "\nStr1 is now: " << str1 << endl;

	//concatenates an arr2 to arr1 (no spaces)
	strcat(arr1, arr2);
	cout << "\narr1 is now " << arr1 << endl;

	//get the length of an str
	int lenStr = str1.size();
	int lenChar = strlen(arr1);
	cout << "\nLength of str1: " << lenStr << endl;
	cout << "\nLength of arr1: " << lenChar << endl;

	cout << "\nEnd..." << endl;

	return 0;
}
