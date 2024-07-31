#include<iostream>
using namespace std;

int main43() {

	//do...while循环
	//在屏幕中输出0~9

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	
	//do..while与while的区别在于do...while会先执行一次循环代码
	system("pause");

	return 0;
}