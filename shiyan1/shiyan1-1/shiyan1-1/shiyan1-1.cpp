#include<iostream>
using namespace std;
int main()
{
	int k = 0, i = k + 1, s;//i大写，未定义k
	i++;
	cout << i << endl;//无法输出算术式
	//int i = 1; i重复定义
	i++;
	cout << i << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
