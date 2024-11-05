#include<iostream>
using namespace std;
int yue(int x, int y)
{
	if (x % y == 0)
		return y;
	else 
		return yue(y, x % y);
}
int main()
{
	int a, b,c,d;
	cout << "请输入两个数字" << endl;
	cin >> a >> b;
	c=yue(a, b);
	cout << "他们的最大公约数为：" << c << endl;
	d = a * b / c;
	cout << "他们的最小公倍数为：" << d << endl;
	return 0;
}