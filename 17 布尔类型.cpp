#include<iostream>
using namespace std;

int main17(){

	//创建bool数据类型
	bool flag = true; //true 代表真
	cout << flag << endl;

	flag = false; //true 代表真
	cout << flag << endl;

	//本质上 1代表真，0代表假
	
	//查看bool类型所占内存空间
	cout << "bool数据类型所占内存大小：" << sizeof(bool) << endl;
	cout << "flag所占内存大小：" <<sizeof(flag) << endl;

	system("pause");

	return 0;
}