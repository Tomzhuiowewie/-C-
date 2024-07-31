#include<iostream>
using namespace std;

int main35() {

	//1. 三只小猪称体重，判断哪只最重
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//让用户输入三只小猪的重量
	cout << "请输入小猪A的体重" << endl;
	cin >> num1;

	cout << "请输入小猪B的体重" << endl;
	cin >> num2;

	cout << "请输入小猪C的体重" << endl;
	cin >> num3;

	cout << "小猪A的体重为：" << num1 << endl;
	cout << "小猪B的体重为：" << num2 << endl;
	cout << "小猪C的体重为：" << num3 << endl;

	//3. 判断哪只小猪最重
	//先判断A和B的重量
	if (num1 > num2) //小猪A比小猪B重
	{ 
		if (num1 > num3) //小猪A比小猪C重
		{
			cout << "小猪A最重！！！" << endl;
		}
		else //小猪C比小猪A重
		{
			cout << "小猪C最重！！！" << endl;
		}
	}
	else //小猪B比小猪A重
	{
		if (num2 > num3) //小猪B比小猪C重
		{
			cout << "小猪B最重！！！" << endl;
		}
		else //小猪C比小猪B重
		{
			cout << "小猪C最重！！！" << endl;
		}
	}
	system("pause");

	return 0;
}