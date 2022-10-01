#include <iostream>
using namespace std;

class Employee
{
	int code;

public:
	int getCode()
	{
		return code;
	}

	Employee(int c)
	{
		code = c;
	}
};

int main()
{
	Employee e1(123);
	cout << e1.getCode() << endl;
	Employee e2(456);
	cout << e2.getCode();
}
