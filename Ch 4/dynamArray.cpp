//Sam Vernaza
//Dynamic Array examples

#include <iostream>
using namespace std;

int main ()
{
	double * p3 = new double [3]; // a double with 3 elements
	p3[0] = 0.3;
	p3[1] = 2.1;
	p3[2] = 1.1;

	cout << "Value at p3[1] is: " << p3[1] << endl;
	p3 += 1; //increment the pointer one location
	cout << "Now p3[0] is: " << p3[0] << " and ";
	cout << "p3[1] is: " << p3[1] << endl;

	p3 -= 1; //point back to beginning

	delete [] p3;
	return 0;
}
