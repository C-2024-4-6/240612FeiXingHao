#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c,m;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		m = _area(a, b, c);
		cout << "该三角形的面积为：" << m << endl;
	}
	else
		cout << "这三条边不能组成三角形" << endl;
	return 0;
}