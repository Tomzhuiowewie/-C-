#include<iostream>
using namespace std;

int main()
{
	//数组名
	//统计整个数组在内存中的长度
	
	int arr[5] = { 1,2,3,4,5 };

	cout << sizeof(arr) / sizeof(arr[0])  << endl;

	//可以获取数值在内存中的首地址
	cout << arr << endl;

	system("pause");

	return 0;
}