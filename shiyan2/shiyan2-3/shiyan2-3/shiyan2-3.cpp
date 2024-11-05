#include <iostream>
using namespace std;
int main()
{
	float a, b, c, l;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a)
	{
		l = a + b + c;
		cout << "该三角形的周长为：" << l << endl;
		if (a == b || a == c || b == c)
			cout << "该三角形为等腰三角形" << endl;
		else
			cout << "该三角形不是等腰三角形" << endl;
	}
	else
		cout << "这三条边无法构成三角形！" << endl;
	return 0;
}