#include<iostream>
using namespace std;

int main12() {

	//���Σ�short int long long long
	// short<int<=long<=long long
	//sizeof:��ȡ��������ռ���ڴ��С

	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(short) << endl;
	cout << "num1ռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "num2ռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "num3ռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(long long) << endl;
	cout << "num4ռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	system("pause");

	return 0;
}