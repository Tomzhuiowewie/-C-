#include<iostream>
using namespace std;

int main13() {

	//�����ȣ�float
	//˫���ȣ�double
	//Ĭ����ʾ6λ��Ч���֣�С����

	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;
	cout << "float�������͵ĳ��ȣ�" << sizeof(float) << endl;
	cout << "f1�������͵ĳ��ȣ�" << sizeof(f1) << endl;

	double f2 = 3.1415926;
	cout << "f2 = " << f2 << endl;
	cout << "double�������͵ĳ��ȣ�" << sizeof(double) << endl;
	cout << "f2�������͵ĳ��ȣ�" << sizeof(f2) << endl;

	//��ѧ������
	float f3 = 3e2; //3 * 10 ^ 2
	cout << "f3 = " << f3 << endl;

	float f4 = 3e-2; //3 * 0.1 ^ 2
	cout << "f4 = " << f4 << endl;

	system("pause");
	return 0;
}