#include<iostream>
using namespace std;

int main46() {

	//�����Ӱ���
	//1. ���1��100��Щ����
	for (int i = 1; i <= 100; i++)
	{
		int a = i % 10; //��λ
		int b = i / 10; //ʮλ
		// ��100���������ҵ��������֣���Ϊ������
		if (i % 7 == 0 || a == 7 || b == 7) //7�ı���/��λ��7/ʮλ��7
		{
			cout << "�����ӣ�����" << endl;
		}
		else //������ǣ���ӡ����
		{
			cout << i << endl;
		}
	}	

	system("pause");

	return 0;
}