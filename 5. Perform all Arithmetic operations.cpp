#include <iostream>
using namespace std;
int main()
{
	int p, q;
	float sum, sub, mul, div, mod;
	cout << "Enter any two numbers : " << endl;
	cin >> p >> q;
	cout << "\nSum : " << (sum = p + q) << endl;
	cout << "Difference : " << (sub = p - q) << endl;
	cout << "Product : " << (mul = p * q) << endl;
	cout << "Quotient : " << (div = (float)p / q) << endl;
	cout << "Modulus : " << (mod = p % q) << endl;
	return 0;
}