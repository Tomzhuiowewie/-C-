#include<iostream>
using namespace std;

int main53()
{

	//五只小猪称体重
	//1. 创建5只小猪体重的数组
	int arr[5] = { 300,350,500,400,250 };
	//2. 从数组中找到最大值
	int max = 0; //初始化最大值为0

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max) // 如果当前值大于最大值，替换最大值
		{
			max = arr[i];
		}
		else
			continue;
	}
	//3. 打印最大值
	cout << "最重的小猪为：" << max <<endl;

	system("pause");

	return 0;
}