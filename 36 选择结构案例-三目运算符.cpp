#include<iostream>
using namespace std;

int main36() {

	//三目运算符

	//创建三个变量
	//将a和b做个比较，将变量大的值赋值变量c

	int a = 10;
	int b = 20;

	int c = 0;

	c = (a > b ? a : b);

	cout << "c = " << c << endl;

	//在C++中三目运算符返回的是变量，可以继续复制
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
}