#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c,m;
	cout << "�����������ε�������" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 1)
	{
		m = _area(a, b, c);
		cout << "�������ε����Ϊ��" << m << endl;
	}
	else
		cout << "�������߲������������" << endl;
	return 0;
}