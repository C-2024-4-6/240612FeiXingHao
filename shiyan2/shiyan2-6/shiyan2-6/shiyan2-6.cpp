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
	cout << "��������������" << endl;
	cin >> a >> b;
	c=yue(a, b);
	cout << "���ǵ����Լ��Ϊ��" << c << endl;
	d = a * b / c;
	cout << "���ǵ���С������Ϊ��" << d << endl;
	return 0;
}