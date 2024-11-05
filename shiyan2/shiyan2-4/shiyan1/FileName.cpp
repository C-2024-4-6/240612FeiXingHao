#include <iostream>
using namespace std;
int main()
{
	int a, b,s;
	char c;
	cout << "请输入第一个数字：" << endl;
	cin >> a;
	cout << "你希望进行什么运算（+ - * / %）"<<endl;
	cin >> c;
	while (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
	{
		cout << "运算符错误！请重新输入" << endl;
		cin >> c;
	}
	cout << "请输入第二个数字：" << endl;
	cin >> b;
	switch (c) 
	{
		case '+':
			s = a + b;
			cout << "结果为：" << s;
			break;
		case '-':
			s = a - b; 
			cout << "结果为：" << s;
			break;
		case '*':
			s = a * b;
			cout << "结果为：" << s;
			break;
		case '/':
			if (b == 0)
				cout << "除数不能为0！" << endl;
			else
			{
				s = a / b;
				cout << "结果为：" << s;
			}
			break;
		case '%':
			if (b == 0)
				cout << "除数不能为0！" << endl;
			else
			{
				s = a % b;
				cout << "结果为：" << s;
			}
			break;
	}
	return 0;
}