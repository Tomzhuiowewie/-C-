#include<iostream>
using namespace std;

int main44() {

	//ˮ�ɻ��� 

	//1. �����е���λ����ӡ
	int num = 100;
	do
	{	
	//2. �����е���λ�����ҵ�ˮ�ɻ���
	int a = 0; //��λ
	int b = 0; //ʮλ
	int c = 0; //��λ

	a = num % 10;
	b = (num / 10) % 10;
	c = num / 100;
	if (a*a*a + b*b*b + c*c*c == num) //�����ˮ�ɻ�������ӡ����
	{
		cout << num << "��ˮ�ɻ�����" << endl;
	}
	num++;
	} while (num < 1000);

	system("pause");

	return 0;
}