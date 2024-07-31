#include<iostream>
using namespace std;

int main52()
{
	//数组名
	//统计整个数组在内存中的长度
	
	int arr[5] = { 1,2,3,4,5 };

	cout << "数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "数组中每个元素占用内存空间：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//可以获取数值在内存中的首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	// 数组名是常量，不可以进行赋值操作
	//arr = 100

	system("pause");

	return 0;
}