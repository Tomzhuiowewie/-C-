#include<iostream>
using namespace std;

int main26() {

	//�߼������
	// �ǣ���
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	// ��||
	int a1 = 10;
	int b1 = 20;
	cout << (a1 || b1 ) << endl;
	cout << (a1 > 10 || b1 < 50) << endl;


	// �룺&&
	int a2 = 10;
	int b2 = 20;
	cout << (a2 >= 10 && b2 < 50) << endl;

	system("pause");

	return 0;
}