#include <iostream>
using namespace std;
int main()
{
	int d, w, m, y;
	cout << "Enter days : ";
	cin >> d;
	
	y = d / 365;
	m = d / 30;
	w = d / 7;
	cout << "\nYears : " << y << endl;
	cout << "weeks : " << w << endl;
	cout << "Months : " << m << endl;
	cout << "Days : " << d << endl;
	
	return 0;
}