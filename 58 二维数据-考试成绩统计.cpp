#include<iostream>
#include<string>
using namespace std;

int main58()
{

	//���Գɼ�ͳ��

	//1. ������ά���飬3��3��
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "����","����","����" };

	//2. ͳ��ÿ���˵ķ���
	for (int i = 0; i < 3; i++)
	{
		int sum = 0; //ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
	}

	system("pause");

	return 0;
}