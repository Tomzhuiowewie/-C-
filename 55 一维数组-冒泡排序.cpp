#include<iostream>
using namespace std;

int main55()
{

	//冒泡排序
	// 1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个

	//2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值

	//3. 重复以上步骤，每次比较次数-1，直到不需要比较

	//创建数组
	int arr[11] = { 5,7,4,9,6,8,7,12,35,86,5 };
	cout << "未排序数组：" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	//开始冒泡排序，比较相邻元素
	for (int j = 0;j < sizeof(arr) / sizeof(arr[0]) - 1;j++)
	{
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1 - j ; i++)
		{
			//如果第一个比第二个大，就交换他们两个
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
	//打印排序数组
	cout << "排序数组：" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	system("pause");

	return 0;
}