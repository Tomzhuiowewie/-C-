#include<iostream>
using namespace std;

int main51() {

	//���飺����һ���������ڴ�ռ��У�ÿ��Ԫ������������ͬ��

	//�������� ������[ ���鳤�� ]��

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout << arr[0] << endl;

	//�������� ������[ ���鳤�� ] = {ֵ1��ֵ2��ֵ3....}
	//δ����������0���
	int arr2[5] = { 10,20,30,40 };
	
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}

	// �������� ������[] = {ֵ1��ֵ2��ֵ3....}
	//�������飬�����г�ʼ����
	int arr3[] = { 90,20,30,40 };

	for (int i = 0; i < 4; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");

	return 0;
}