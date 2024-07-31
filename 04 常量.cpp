#include<iostream>
using namespace std;

//常量的定义方式
//define 宏常量

#define Day 7

//const 修饰的变量

int main4() {
	
	//Day = 14; //错误，Day是常量，一旦修改就报错；
	cout << "一周总共有：" << Day << "天" << endl;

	//const修饰的变量
	const int month = 12;
	//month = 24; //错误，const修饰的变量也称为常量；

	cout << "一年总共有：" << month << "个月份" << endl;

	system("pause");

	return 0;
}