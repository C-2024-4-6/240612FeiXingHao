#include <iostream>
using namespace std;
int main()
{
	char a, b;
	int c;
	cout << "������һ���ַ���" << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
	{
		b = a - 32;
		cout << "���дΪ��" << b;
	}
	else
	{
		c = a + 1;
		cout << "����һ���ַ���ASCII��Ϊ " << c;
	}
	return 0;
}
