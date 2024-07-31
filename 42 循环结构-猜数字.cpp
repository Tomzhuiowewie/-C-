#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main42() {

	//添加随机数种子，利用当前时间生成随机数，防止每次随机数一样
	srand((unsigned int)time(NULL));

	//1. 系统随机生成数字
	int num = rand() % 100 + 1; //生成0~99的随机数
	//cout << num << endl;

	//2. 玩家进行猜测
	int val = 0; //玩家的输入数据

	while (1)
	{
		cout << "请输入您的猜测值:" << endl;
		cin >> val;

		//3. 判断玩家的猜测
		if (val > num)//猜错：提示猜的结果 过大或过小 重新返回第二步
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)//猜错：提示猜的结果 过大或过小 重新返回第二步
		{
			cout << "猜测过小" << endl;
		}
		else		//猜对：退出游戏
		{
			cout << "恭喜您猜对了！！" << endl;
			break;//break在循环中，可利用该关键字来退出当前循环
		}
	}
		
	system("pause");

	return 0;
}