#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
	double distance; // kms
public:
	string mobile;
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
	Customer c1;
	c1.set_distance(8);
	cout << c1.get_distance_in_miles();
	return 0;
}
