#include <iostream>
using namespace std;
int main()
{
	int num = 0, i;
	cout << "Enter any number : ";
	cin >> num;

	for (i = num; i >= 1; i--)
	{
		cout << i << " ";
	}
	return 0;
}