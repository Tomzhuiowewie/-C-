#include<iostream>
using namespace std;

int main53()
{

	//��ֻС�������
	//1. ����5ֻС�����ص�����
	int arr[5] = { 300,350,500,400,250 };
	//2. ���������ҵ����ֵ
	int max = 0; //��ʼ�����ֵΪ0

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max) // �����ǰֵ�������ֵ���滻���ֵ
		{
			max = arr[i];
		}
		else
			continue;
	}
	//3. ��ӡ���ֵ
	cout << "���ص�С��Ϊ��" << max <<endl;

	system("pause");

	return 0;
}