#include <iostream>
using namespace std;
int main()
{
	int x = 5, y = 10, temp;
	cout << "Before swapping : " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	temp = x;
	x = y;
	y = temp;
	cout << "\nAfter swapping : " << endl;
	cout << "x = " << x << ", y = " << y << endl;
	return 0;
}