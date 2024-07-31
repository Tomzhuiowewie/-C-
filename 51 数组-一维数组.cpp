#include<iostream>
using namespace std;

int main51() {

	//数组：放在一块连续的内存空间中；每个元素数据类型相同；

	//数据类型 数组名[ 数组长度 ]；

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout << arr[0] << endl;

	//数据类型 数组名[ 数组长度 ] = {值1，值2，值3....}
	//未定义量，以0填充
	int arr2[5] = { 10,20,30,40 };
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	// 数据类型 数组名[] = {值1，值2，值3....}
	//定义数组，必须有初始长度
	int arr3[] = { 90,20,30,40 };

	for (int i = 0; i < 4; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");

	return 0;
}