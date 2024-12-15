#include<iostream>
using namespace std;
int d;
int yue(int &x, int &y)
{
	if (y == 0)
		return x;
	else
	{
		int t = y;
		y = x % y;
		x = t;
	}
	return yue(x, y);
}
int bei(int &a, int &b,int &e)
{
	int c,z;
	z = a * b;
	e = yue(a, b);
	c = z / e;
	return c;
}
int main()
{
	int m, n,f;
	cout << "请输入两个数字：" << endl;
	cin >> m >> n;
	f = bei(m, n,d);
	cout << "他们的最大公约数为：" << d << endl;
	cout << "他们的最小公倍数为：" << f << endl;
	return 0;
}