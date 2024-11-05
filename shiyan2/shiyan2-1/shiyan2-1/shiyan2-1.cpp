#include <iostream>
using namespace std;
int main()
{
	char a, b;
	int c;
	cout << "请输入一个字符：" << endl;
	cin >> a;
	if (a >= 97 && a <= 122)
	{
		b = a - 32;
		cout << "其大写为：" << b;
	}
	else
	{
		c = a + 1;
		cout << "其下一个字符的ASCII码为 " << c;
	}
	return 0;
}
