#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int l1, l2;
	l1 = strlen(s1);
	l2 = strlen(s2);
	for (int i = 0; i < l2 - l1; i++)
	{
		int j;
		for (j = 0; j < l1; j++)
		{
			if (s2[i + j] != s1[j])
				break;
		}
		if (j == l1)
			return i;
	}
	return -1;
}
int main()
{
	char s1[100], s2[100];
	cin.getline(s1, sizeof(s1));
	cin.getline(s2, sizeof(s2));
	int t=indexof(s1, s2);
	cout << t;
	return 0;
}