#include<iostream>
using namespace std;

int main()
{
	const float pi = 3.14;
	float h, r, v;
	cout << "��ֱ�����Բ׶�뾶��׶��" << endl;
	cin >> r >> h;
	v = (pi * (r * r) * h) / 3;
	cout << "Բ׶�������:" << v;
	return 0;
}
