#include<iostream>
using namespace std;

int main36() {

	//��Ŀ�����

	//������������
	//��a��b�����Ƚϣ����������ֵ��ֵ����c

	int a = 10;
	int b = 20;

	int c = 0;

	c = (a > b ? a : b);

	cout << "c = " << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�������
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}