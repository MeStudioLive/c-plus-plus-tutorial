#include <iostream>
using namespace std;

void change(int &x);

int main()
{
	int x = 5;
	change(x);
	cout << x;
}

void change(int &x)
{
	x = 99;
}