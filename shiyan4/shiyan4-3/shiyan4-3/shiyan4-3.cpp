#include<iostream>
using namespace std;
bool a[222];
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		for (int j = i; j <= 100; j += i)
		{
			if (a[j] == 1)
				a[j] = 0;
			else
				a[j] = 1;
		}
	}
	for (int i = 1; i <= 100; i++)
	{
		if (a[i] == 1)
			cout << i << " ";
	}
	return 0;
}