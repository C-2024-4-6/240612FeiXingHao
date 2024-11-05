#include<iostream>
using namespace std;
int main()
{
	float day=0,m=0,a;
	for (int i = 2; i <= 100; i *= 2)
	{
		m = m + i * 0.8;
		day++;
	}
	a = m / day;
	cout << a;
	return 0;
}