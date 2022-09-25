#include <iostream>
#include <string>
using namespace std;

class Customer
{
	double distance;

public:
	Customer(double d)
	{
		distance = d;
	}
	Customer()
	{
		distance = 9.9;
	}
	double get_distance()
	{
		return distance;
	}
};

int main()
{
	Customer c(2.2);
	cout << c.get_distance();
	return 0;
}
