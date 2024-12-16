#include<iostream>
using namespace std;
class Cuboid
{
private:
	int length[3];
	int width[3];
	int height[3];
	int v[3];
public:
	void set_cuboid(int i)
	{
		cin >> length[i] >> width[i] >> height[i];
	}
	void volume(int i)
	{
		v[i]=length[i] * width[i] * height[i];
	}
	void show_cuboid()
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "第" << i + 1 << "个长方体的体积为:" << v[i]<<endl;
		}
	}
};
int main()
{
	Cuboid cuboid;
	cout << "请依次输入三个长方体的长宽高" << endl;
	for (int i = 0; i < 3; i++)
	{
		cuboid.set_cuboid(i);
		cuboid.volume(i);
	}
	cuboid.show_cuboid();
	return 0;
}