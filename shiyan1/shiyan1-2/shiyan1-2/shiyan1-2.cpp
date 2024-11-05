#include<iostream>
using namespace std;

int main()
{
	const float pi = 3.14;
	float h, r, v;
	cout << "请分别输入圆锥半径和锥高" << endl;
	cin >> r >> h;
	v = (pi * (r * r) * h) / 3;
	cout << "圆锥的体积是:" << v;
	return 0;
}
