#include<iostream>
using namespace std;

int main14() {

	//�ַ��ͱ���������ʽ
	char ch = 'e';
	cout << ch << endl;

	//�ַ��ͱ�����ռ�ڴ�Ĵ�С
	cout << "char�ַ��ͱ�����ռ�ڴ棺" << sizeof(char) << endl;
	cout << "ch�ַ�������ռ�ڴ棺" << sizeof(ch) << endl;
	
	//�ַ��ͱ��������Ĵ���
	//char ch2 = "b"; //�����Ŵ���
	//char ch2 = 'abcdf'; //�ַ��ͱ�����������ֻ����һ���ַ�
	
	//�ַ��ͱ�����Ӧ��ASCII����
	//a - 97
	//A - 65
	cout << (int)ch << endl;

	system("pause");

	return 0;
}