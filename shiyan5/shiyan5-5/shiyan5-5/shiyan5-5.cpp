#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X, int Y)
	{
		x = X, y = Y;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "点的坐标为：(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p1(60,80);
	p1.setPoint(5, 5);
	p1.display();
	return 0;
}