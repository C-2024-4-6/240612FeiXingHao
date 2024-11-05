#include <iostream>
using namespace std;
int main()
{
	int hua, she;
	cout << "请输入一个华氏度：" << endl;
	cin >> hua;
	she = (hua - 32) / 1.8;
	cout << "其对应的摄氏度为：" << she << endl;
	return 0;
}
