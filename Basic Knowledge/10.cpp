#include <iostream>
using namespace std;

int main()
{
	enum Color
	{
		Red,
		Green,
		Blue
	};
	Color c1 = Color::Red;
	Color c2 = Color::Red;
	if (c1 == c2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	return 0;
}
