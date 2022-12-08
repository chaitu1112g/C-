#include <iostream>
using namespace std;
int main()
{
	float cel, fah;
	cout << "Enter Temperature in Celsius : ";
	cin >> cel;
	fah = (cel * 9 / 5) + 32;
	cout << "Temperature in Fahrenheit : " << fah;
	return 0;
}