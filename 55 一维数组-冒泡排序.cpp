#include<iostream>
using namespace std;

int main55()
{

	//ð������
	// 1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�����������

	//2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ

	//3. �ظ����ϲ��裬ÿ�αȽϴ���-1��ֱ������Ҫ�Ƚ�

	//��������
	int arr[11] = { 5,7,4,9,6,8,7,12,35,86,5 };
	cout << "δ�������飺" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	//��ʼð�����򣬱Ƚ�����Ԫ��
	for (int j = 0;j < sizeof(arr) / sizeof(arr[0]) - 1;j++)
	{
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1 - j ; i++)
		{
			//�����һ���ȵڶ����󣬾ͽ�����������
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	
	//��ӡ��������
	cout << "�������飺" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
	system("pause");

	return 0;
}