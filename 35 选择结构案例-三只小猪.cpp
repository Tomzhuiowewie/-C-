#include<iostream>
using namespace std;

int main35() {

	//1. ��ֻС������أ��ж���ֻ����
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//���û�������ֻС�������
	cout << "������С��A������" << endl;
	cin >> num1;

	cout << "������С��B������" << endl;
	cin >> num2;

	cout << "������С��C������" << endl;
	cin >> num3;

	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	//3. �ж���ֻС������
	//���ж�A��B������
	if (num1 > num2) //С��A��С��B��
	{ 
		if (num1 > num3) //С��A��С��C��
		{
			cout << "С��A���أ�����" << endl;
		}
		else //С��C��С��A��
		{
			cout << "С��C���أ�����" << endl;
		}
	}
	else //С��B��С��A��
	{
		if (num2 > num3) //С��B��С��C��
		{
			cout << "С��B���أ�����" << endl;
		}
		else //С��C��С��B��
		{
			cout << "С��C���أ�����" << endl;
		}
	}
	system("pause");

	return 0;
}