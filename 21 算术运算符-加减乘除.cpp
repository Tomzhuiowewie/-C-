#include<iostream>
using namespace std;

int main21() {

	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << "a1 + b1 = " << a1 + b1 << endl;
	cout << "a1 - b1 = " << a1 - b1 << endl;
	cout << "a1 * b1 = " << a1 * b1 << endl;
	cout << "a1 / b1 = " << a1 / b1 << endl; //两个整数相除，结果依旧是整数，小数部分去除

	//cout << 10 / 0 << endl; //错误！除数非零

	//小数相除
	double d1 = 0.5;
	double d2 = 0.25;
	double d3 = 0.22;

	cout << d1 / d2 << endl;
	cout << d1 / d3 << endl;

	system("pause");

	return 0;
}