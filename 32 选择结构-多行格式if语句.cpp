#include<iostream>
using namespace std;

int main32() {

	//选择结构 - 多行if语句
	//输入考试分数，如果分数大于600，视为考上一本大学，在屏幕上输出，反之，打印未考上一本大学

	//1. 输入考试分数
	float score = 0;
	cout << "请输入您的考试分数：" << endl;
	cin >> score;

	//2. 提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3. 判断 如果大于600，打印考上一本，否则打印未考上一本
	if (score >= 600) //如果大于600，执行下面代码
	{
		cout << "恭喜您考上了一本大学！！！" << endl;
	}
	else //如果不大于600，执行下面大括号内容
	{
		cout << "很遗憾，您未考上一本大学。" << endl;
	}

	system("pause");

	return 0;
}