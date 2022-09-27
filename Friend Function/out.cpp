#include <iostream>
using namespace std;

class TargetBoy;

class TargetGirl
{
	int mobile = 123;
	friend int side_girl(TargetGirl, TargetBoy);
};

class TargetBoy
{
	int mobile = 456;
	friend int side_girl(TargetGirl, TargetBoy);
};

int side_girl(TargetGirl tg, TargetBoy tb)
{
	cout << tg.mobile << "," << tb.mobile;
};

int main()
{
	TargetGirl tg;
	TargetBoy tb;
	side_girl(tg, tb);
}