#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include<ctime>

int main42() {

	//�����������ӣ����õ�ǰʱ���������������ֹÿ�������һ��
	srand((unsigned int)time(NULL));

	//1. ϵͳ�����������
	int num = rand() % 100 + 1; //����0~99�������
	//cout << num << endl;

	//2. ��ҽ��в²�
	int val = 0; //��ҵ���������

	while (1)
	{
		cout << "���������Ĳ²�ֵ:" << endl;
		cin >> val;

		//3. �ж���ҵĲ²�
		if (val > num)//�´���ʾ�µĽ�� ������С ���·��صڶ���
		{
			cout << "�²����" << endl;
		}
		else if (val < num)//�´���ʾ�µĽ�� ������С ���·��صڶ���
		{
			cout << "�²��С" << endl;
		}
		else		//�¶ԣ��˳���Ϸ
		{
			cout << "��ϲ���¶��ˣ���" << endl;
			break;//break��ѭ���У������øùؼ������˳���ǰѭ��
		}
	}
		
	system("pause");

	return 0;
}