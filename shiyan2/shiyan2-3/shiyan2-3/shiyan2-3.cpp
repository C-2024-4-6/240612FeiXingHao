#include <iostream>
using namespace std;
int main()
{
	float a, b, c, l;
	cout << "�����������ε�������" << endl;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a)
	{
		l = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << l << endl;
		if (a == b || a == c || b == c)
			cout << "��������Ϊ����������" << endl;
		else
			cout << "�������β��ǵ���������" << endl;
	}
	else
		cout << "���������޷����������Σ�" << endl;
	return 0;
}