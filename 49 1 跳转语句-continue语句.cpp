#include<iostream>
using namespace std;

int main491() {

	//countinue:����ѭ����ʣ�´��룬ִ���´�ѭ��

	for (int i = 0; i < 100; i++)
	{
		//��������������ż�������
		if (i % 2 ==0)
		{
			continue; //����ɸѡ������ִ�е��˾Ͳ�������ִ��
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}