#include<iostream>
using namespace std;

int main13() {

	//单精度：float
	//双精度：double
	//默认显示6位有效数字（小数）

	float f1 = 3.1415926f;
	cout << "f1 = " << f1 << endl;
	cout << "float数据类型的长度：" << sizeof(float) << endl;
	cout << "f1数据类型的长度：" << sizeof(f1) << endl;

	double f2 = 3.1415926;
	cout << "f2 = " << f2 << endl;
	cout << "double数据类型的长度：" << sizeof(double) << endl;
	cout << "f2数据类型的长度：" << sizeof(f2) << endl;

	//科学计数法
	float f3 = 3e2; //3 * 10 ^ 2
	cout << "f3 = " << f3 << endl;

	float f4 = 3e-2; //3 * 0.1 ^ 2
	cout << "f4 = " << f4 << endl;

	system("pause");
	return 0;
}