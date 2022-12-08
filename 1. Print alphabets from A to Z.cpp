#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter 'u' to display upper case characters." << endl;
	cout << "Enter 'l' to display lower case characters." << endl;
	cout << "Enter the character : ";
	cin >> ch;

	if (ch == 'U' || ch == 'u')
	{
		for (ch = 'A'; ch <= 'Z'; ++ch)
			cout << ch << ",";
	}
	else if (ch == 'L' || ch == 'l')
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			cout << ch << ",";
	}
	else
	{
		printf("Error! You entered an invalid character.");
	}
	}