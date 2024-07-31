#include<iostream>
using namespace std;

int main491() {

	//countinue:跳过循环体剩下代码，执行下次循环

	for (int i = 0; i < 100; i++)
	{
		//如果是奇数输出，偶数不输出
		if (i % 2 ==0)
		{
			continue; //可以筛选条件，执行到此就不再向下执行
		}
		cout << i << endl;
	}

	system("pause");

	return 0;
}