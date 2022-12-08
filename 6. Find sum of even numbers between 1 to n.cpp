#include <iostream>
using namespace std;
int main()
{
	int num, sum = 0;

	cout << "Enter the limit : " << endl;
	cin >> num;

	cout << "Even numbers from 1 to " << num << " are : " << endl;
	for (int i = 1; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			sum += i;
		}
	}
	cout << "Sum of even numbers from 1 to " << num << " is " << sum << endl;
	return 0;
}