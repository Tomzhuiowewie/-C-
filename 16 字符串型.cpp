#include<iostream>
using namespace std;
#include<string>

int main16() {

	//C风格字符串
	//注意事项：char 字符串[]
	//注意事项2：等号后面要用双引号
	char str[] = "hello world";
	cout << "C风格字符串" << str << endl;

	//C++风格字符串
	//注意事项：包含一个头文件
	string str2 = "hello world";
	cout << "C++风格字符串:" << str2 << endl;

	system("pause");

	return 0;
}