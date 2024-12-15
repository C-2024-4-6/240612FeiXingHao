#include<iostream>
using namespace std;
bool changed = true;
double a[100];
void swap(double& x, double& y)
{
	double t = x;
	x = y;
	y = t;
}
int main()
{
	cout << "请输入十个数" << endl;
	for (int i = 1; i <= 10; i++)
		cin >> a[i];
	do
	{
		changed = false;
		for (int i = 1; i <10; i++)
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 1; i <= 10; i++)
		cout << a[i] << " ";
	return 0;
}