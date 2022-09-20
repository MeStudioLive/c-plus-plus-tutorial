#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	while (x % 2 != 0)
	{
		cout << "please enter even number ";
		cin >> x;
	}
}