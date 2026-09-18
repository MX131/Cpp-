#include <iostream>
#include <iomanip>
using std:: endl;
using std:: cout;
using std:: fixed;

int main()
{
	float bits = sizeof(bits);
	double bits1 = sizeof(bits1);
	long double bits2 = sizeof(bits2);
	
	cout.width(4);
	cout << fixed;
	cout << bits << endl;
	cout << bits1 << endl;
	cout << bits2;

	return 0;
}
