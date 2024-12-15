#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	if (l1 > l2)
		return -1;
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
	int t;
	cout << "Enter the first string:";
	cin.getline(s1, sizeof(s1));
	cout << endl;
	cout << "Enter the second string:";
	cin.getline(s2, sizeof(s2));
	cout << endl;
	cout << s2;
	t = indexOf(s1, s2);
	cout << "indexOf(¡°"<<s1<<"¡±, ¡°"<<s2<<"¡±) is " << t;
	return 0;
}