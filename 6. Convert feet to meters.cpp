#include <iostream>
using namespace std;
int main()
{
	double feet, mtr;
	cout << "Enter the length in feet : ";
	cin >> feet;
	mtr = feet * 0.3048;
	cout << "Length in meters : " << mtr << endl;
}