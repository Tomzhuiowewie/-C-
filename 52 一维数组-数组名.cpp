#include<iostream>
using namespace std;

int main52()
{
	//������
	//ͳ�������������ڴ��еĳ���
	
	int arr[5] = { 1,2,3,4,5 };

	cout << "����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "������ÿ��Ԫ��ռ���ڴ�ռ䣺" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ�����" << sizeof(arr) / sizeof(arr[0]) << endl;

	//���Ի�ȡ��ֵ���ڴ��е��׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	// �������ǳ����������Խ��и�ֵ����
	//arr = 100

	system("pause");

	return 0;
}