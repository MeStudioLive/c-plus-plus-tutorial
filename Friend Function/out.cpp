#include <iostream>
using namespace std;

class One
{
	int x = 123;
	friend void myfn(One);
};

void myfn(One o)
{
	cout << o.x;
}

int main()
{
	One o;
	myfn(o);
}