#include<iostream>
using namespace std;

int main54()
{

	//����Ԫ������
	//1. ��������
	int arr[5] = { 4,5,9,7,8 };
	cout << "����ǰ���飺" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	//2. ʵ������
	int start = 0; //��ʼԪ���±�
	int end = sizeof(arr)/sizeof(arr[0]) - 1;  //ĩβԪ���±�
	
	while (start < end)
	{
		//start��end�±껥��
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//�±����
		start++;
		end--;
	}
	
	
	//3. ��ӡ���ú������
	cout << "���ú����飺" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	system("pause");

	return 0;
}