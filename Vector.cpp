#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers{1, 2, 3};
	numbers.push_back(4);
	numbers.push_back(5);
	for (auto x : numbers)
	{
		cout << x << endl;
	}
}
