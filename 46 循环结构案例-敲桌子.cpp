#include<iostream>
using namespace std;

int main46() {

	//敲桌子案例
	//1. 输出1到100这些数字
	for (int i = 1; i <= 100; i++)
	{
		int a = i % 10; //个位
		int b = i / 10; //十位
		// 从100个数字中找到特殊数字，改为敲桌子
		if (i % 7 == 0 || a == 7 || b == 7) //7的倍数/个位有7/十位有7
		{
			cout << "敲桌子！！！" << endl;
		}
		else //如果不是，打印数字
		{
			cout << i << endl;
		}
	}	

	system("pause");

	return 0;
}