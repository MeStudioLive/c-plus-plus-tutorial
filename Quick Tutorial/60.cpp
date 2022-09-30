#include <iostream>
using namespace std;

void printer(int *x)
{
	*x = 10;
}

int main()
{
	int x = 5;
	printer(&x);
	cout << x;
}
