#include<iostream>
using namespace std;

int main37() {

	//switch���
	//����Ӱ���д��
	//10~9 ����
	//8~7 �ǳ���
	//6~5 һ��
	//5���� ��Ƭ

	//1. ��ʾ�û�����Ӱ��������
	cout << "�����Ӱ���д��" << endl;
	//2. �û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3. �����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ��" << endl;
		break; //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ��" << endl;
		break; //�˳���ǰ��֧
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ��" << endl;
		break; //�˳���ǰ��֧
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ��" << endl;
		break; //�˳���ǰ��֧
	case 6:
		cout << "����Ϊ��һ��ĵ�Ӱ��" << endl;
		break; //�˳���ǰ��֧
	case 5:
		cout << "����Ϊ��һ��ĵ�Ӱ��" << endl;
		break; //�˳���ǰ��֧
	default:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ��" << endl;
		break;
	}

	//if��switch����
	//ȱ�㣺�ж�ֻ�������λ��ַ��ͣ�����������
	//�ŵ㣺������ˣ�Ч�ʸ�

	system("pause");

	return 0;
}