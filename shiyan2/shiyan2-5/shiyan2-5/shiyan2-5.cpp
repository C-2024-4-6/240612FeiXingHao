#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int n,zimu=0,kong=0,shuzi=0,qita=0;
	getline(cin,a);
	n = a.length();
	for (int i = 0; i <= n; i++)
	{
		if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
			zimu++;
		else if (a[i] == ' ')
			kong++;
		else if (a[i] >= 48 && a[i] <= 57)
			shuzi++;
		else
		{
			if (a[i] != 13)
			qita++;
		}
		
	}
	cout << "���ַ�������" << zimu << "����ĸ" << endl;
	cout << "���ַ�������" << kong << "���ո�" << endl;
	cout << "���ַ�������" << shuzi << "������" << endl;
	cout << "���ַ�������" << qita << "�������ַ�" << endl;
	return 0;
}