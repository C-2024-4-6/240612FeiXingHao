#include<iostream>
using namespace std;
int counts[26];
char s[100];
void count(const char s[], int counts[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == j + 65 || s[i] == j + 97)
				counts[j]++;
		}
	}
}
int main()
{
	cout << "Enter a string:";
	cin.getline(s, sizeof(s));
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << char(i + 97) << ":" << counts[i] << "times" << endl;
	}
	return 0;
}
