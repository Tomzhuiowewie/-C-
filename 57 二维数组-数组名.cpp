#include<iostream>
using namespace std;

int main57()
{
	//��ά����������;

	//1. �鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;

	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2. �鿴��ά������׵�ַ
	cout << "��ά������׵�ַ" << (int)arr << endl;
	cout << "��ά�����һ�е��׵�ַ" << (int)arr[0] << endl;
	cout << "��ά����ڶ��е��׵�ַ" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص��׵�ַ" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص��׵�ַ" << (int)&arr[0][1] << endl;
	system("pause");

	return 0;
}