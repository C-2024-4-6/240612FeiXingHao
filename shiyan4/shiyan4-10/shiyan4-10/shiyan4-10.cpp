#include<iostream>
#include<string>
using namespace std;
int parseHex(const char* const hexString)
{
	int t = stoi(hexString, nullptr, 16);
	return t;
}
int main()
{
	string hexString;
	getline(cin,hexString);
	int t = parseHex(hexString.c_str());
	cout << t;
	return 0;
}