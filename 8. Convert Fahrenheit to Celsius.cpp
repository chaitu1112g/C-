#include <iostream>
using namespace std;
int main()
{
	float cel, fah;
	cout << "Enter Temperature in Fahrenheit : ";
	cin >> fah;
	cel = (fah - 32) * 5 / 9;
	cout << "Temperature in Celsius : " << cel;
	return 0;
}