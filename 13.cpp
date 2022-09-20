#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
	double distance; // kms
public:
	string mobile;
	Customer(string m, double d)
	{
		mobile = m;
		distance = d;
	}
	void set_distance(double d)
	{
		distance = d;
	}
	double get_distance()
	{
		return distance;
	}
	double get_distance_in_miles()
	{
		return distance * 0.62;
	}
};

int main()
{
	Customer c1("4444444", 9.9);
	cout << c1.mobile;
	return 0;
}
