#include<iostream>
using namespace std;

int main47() {

	//利用嵌套循环实现星图

	//打印一行星图
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");

	return 0;
}