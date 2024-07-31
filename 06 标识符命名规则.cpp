#include<iostream>
using namespace std;

int main6() {
	//1. 非关键字
	//int for = 10; //错误
	//2. 组成：字母、下划线、数字
	int abc = 10;
	int abc_123 = 100;
	//数字非首字符
	//int 123zbh = 40; //错误
	//区分大小写
	int aaa = 100;
	int AAA = 99;
	cout << "aaa = " << aaa << endl;
	cout << "AAA = " << AAA << endl;

	//建议：望文生义
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << "sum = " << sum << endl;

	system("pause");

	return 0;
}