#include <iostream>
using namespace std;
int main()
{
	int a, b,s;
	char c;
	cout << "�������һ�����֣�" << endl;
	cin >> a;
	cout << "��ϣ������ʲô���㣨+ - * / %��"<<endl;
	cin >> c;
	while (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		cout << "�������������������" << endl;
		cin >> c;
	}
	cout << "������ڶ������֣�" << endl;
	cin >> b;
	switch (c) 
	{
		case '+':
			s = a + b;
			cout << "���Ϊ��" << s;
			break;
		case '-':
			s = a - b; 
			cout << "���Ϊ��" << s;
			break;
		case '*':
			s = a * b;
			cout << "���Ϊ��" << s;
			break;
		case '/':
			if (b == 0)
				cout << "��������Ϊ0��" << endl;
			else
			{
				s = a / b;
				cout << "���Ϊ��" << s;
			}
			break;
		case '%':
			if (b == 0)
				cout << "��������Ϊ0��" << endl;
			else
			{
				s = a % b;
				cout << "���Ϊ��" << s;
			}
			break;
	}
	return 0;
}