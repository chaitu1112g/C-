#include <iostream>
using namespace std;

int main()
{
	int num, num2, rev = 0, rev2 =0;
	cout << "Reverse number using for loop." << endl;
	cout << "Enter any number:";
	cin >> num;

	for (rev = 0; num > 0; num = num / 10)
	{
		rev *= 10;
		rev += num % 10;
	}

	cout << "Reversed number is: " << rev << endl;
	cout << "\nReverse number using while loop." << endl;
	cout << "Enter any number:";
	cin >> num2;
	while (num2 > 0)
	{
		rev2 *= 10;
		rev2 += num2 % 10;
		num2 = num2 / 10;
	}
	cout<<"Reversed number is: "<<rev2;
	return 0;
}