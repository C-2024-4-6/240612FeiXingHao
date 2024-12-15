#include<iostream>
using namespace std;
int n = 1,day=10;
int eat(int a)
{
	day--;
	if (day > 0)
	{
		n = (n + 1) * 2;
		eat(n);
	}
	return n;
}
int main()
{
	int s;
	s=eat(n);
	cout << s;
	return 0;
}