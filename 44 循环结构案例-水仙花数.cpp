#include<iostream>
using namespace std;

int main44() {

	//水仙花数 

	//1. 将所有的三位数打印
	int num = 100;
	do
	{	
	//2. 从所有的三位数中找到水仙花数
	int a = 0; //个位
	int b = 0; //十位
	int c = 0; //百位

	a = num % 10;
	b = (num / 10) % 10;
	c = num / 100;
	if (a*a*a + b*b*b + c*c*c == num) //如果是水仙花数，打印出来
	{
		cout << num << "是水仙花数！" << endl;
	}
	num++;
	} while (num < 1000);

	system("pause");

	return 0;
}