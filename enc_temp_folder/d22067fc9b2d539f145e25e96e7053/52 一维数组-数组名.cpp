#include<iostream>
using namespace std;

int main()
{
	//������
	//ͳ�������������ڴ��еĳ���
	
	int arr[5] = { 1,2,3,4,5 };

	cout << sizeof(arr) / sizeof(arr[0])  << endl;

	//���Ի�ȡ��ֵ���ڴ��е��׵�ַ
	cout << arr << endl;

	system("pause");

	return 0;
}