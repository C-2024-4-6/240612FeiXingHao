#include<iostream>
using namespace std;
class Student
{
public:
	int num;
	int grade;
	Student(int nnum, int ggrade) 
	{
		num = nnum, grade = ggrade;
	}
};
int max(Student* student)
{
	int maxn = 0,n=0;
	for (int i = 0; i < 5; i++)
	{
		if (student[i].grade > maxn)
		{
			maxn = student[i].grade;
			n = student[i].num;
		}
	}
	return n;
}
int main()
{
	Student student[5]={Student(1,80),Student(2,85),Student(3,90),Student(4,95),Student(5,100)};
	int n = max(student);
	cout << "成绩最高的学生学号为：" << n << endl;
	return 0;
}