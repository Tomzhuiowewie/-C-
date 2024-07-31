#include<iostream>
using namespace std;

int main14() {

	//字符型变量创建方式
	char ch = 'e';
	cout << ch << endl;

	//字符型变量所占内存的大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;
	cout << "ch字符变量所占内存：" << sizeof(ch) << endl;
	
	//字符型变量常见的错误
	//char ch2 = "b"; //单引号创建
	//char ch2 = 'abcdf'; //字符型变量单引号内只能有一个字符
	
	//字符型变量对应的ASCII编码
	//a - 97
	//A - 65
	cout << (int)ch << endl;

	system("pause");

	return 0;
}