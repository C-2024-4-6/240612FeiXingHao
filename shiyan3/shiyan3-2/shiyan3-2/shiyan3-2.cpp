#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num <= 1)
		return false;
	if (num <= 3)
		return true;
	for (int j = 2; j <num; j++)
	{
		if (num % j == 0)
			return false;
	}
	return true;
}
int main()
{
	int s = 0;
	for (int i = 1; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			cout << i << " ";
			s++;
			if (s == 10)
			{
				cout << endl;
				s = 0;
			}
		}
	}
	return 0;
}