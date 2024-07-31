#include<iostream>
using namespace std;

int main54()
{

	//数组元素逆置
	//1. 创建数组
	int arr[5] = { 4,5,9,7,8 };
	cout << "逆置前数组：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	//2. 实现逆置
	int start = 0; //起始元素下标
	int end = sizeof(arr)/sizeof(arr[0]) - 1;  //末尾元素下标
	
	while (start < end)
	{
		//start和end下标互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	}
	
	
	//3. 打印逆置后的数组
	cout << "逆置后数组：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	system("pause");

	return 0;
}