#include <iostream>
using namespace std;

enum class Color
{
	Red,
	Green,
	Blue
};

int main()
{
	int x = 5;
	Color c1 = Color::Red;
	Color c2 = Color::Green;
	cout << (c1 != c2);
}
