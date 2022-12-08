#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << "Enter any number : ";
	cin >> N;
	
	for (int i = 1; i <= 10; ++i) {
        cout << N << " × " << i << " = " << N * i << endl;
    }
    
    return 0;
}