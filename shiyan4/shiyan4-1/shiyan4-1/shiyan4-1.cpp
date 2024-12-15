#include<iostream>
using namespace std;
int a[111],c[111];
int main()
{
	int d=1;
	bool flag;
	cout << "Enter ten numbers:";
	for (int i = 1; i <= 10; i++)
	{
		cin >> a[i];
	}
	c[1] = a[1];
	for (int i = 2; i <= 10; i++)
	{
		flag = 1;
		for (int j = i-1; j >=0; j--)
		{
			if (a[i] == a[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag==1)
			c[++d] = a[i];
	}
	for (int i = 1; i <= 10; i++)
	{
		if(c[i]!=0)
			cout << c[i] << ' ';
	}
	return 0;
}