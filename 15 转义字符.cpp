#include<iostream>
using namespace std;

//转移字符：显示一些ASCII不能显示的字符

int main15() {

	//转义字符

	//换行符 \n

	cout << "hello world\nnew" << endl;

	//反斜杠 \\

	cout << "\\" << endl;

	//水平制表符 \t 作用：整齐输出数据

	cout << "aaaa\thello world" << endl;
	cout << "aa\thello world" << endl;
	cout << "aaaaaa\thello world" << endl;

	system("pause");

	return 0;
}