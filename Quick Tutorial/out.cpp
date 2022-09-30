#include <iostream>
using namespace std;

class Employee
{
public:
	int code;
};

int main()
{
	Employee e1;
	e1.code = 123;
	cout << e1.code << endl;
	Employee e2;
	e2.code = 456;
	cout << e2.code;
}
