#include<iostream>
using namespace std;

int main31() {

	//ѡ��ṹ ����if���
	//�û���������������������600����Ϊ����һ����ѧ������Ļ�����

	//1. �û��������
	float score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	//2. ��ӡ�û��������
	cout << "������ķ���Ϊ��" << score << endl;

	//3. �жϷ����Ƿ����600��������ڣ����
	//ע�����if�������治Ҫ�ӷֺ�
	if (score >= 600)
	{
		cout << "��ϲ��������һ����ѧ������" << endl;
	}

	system("pause");

	return 0;
}