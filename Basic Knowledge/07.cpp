#include <iostream>
using namespace std;

int main()
{
	char x[] = {'A', 'B', 'C'};
	for (auto &temp : x)
	{
		cout << temp;
		temp = 'M';
	}
	for (auto temp : x)
	{
		cout << temp;
	}
	for (auto temp : x)
	{
		cout << temp;
	}
}