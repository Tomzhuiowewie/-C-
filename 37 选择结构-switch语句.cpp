#include<iostream>
using namespace std;

int main37() {

	//switch语句
	//给电影进行打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5以下 烂片

	//1. 提示用户给电影进行评分
	cout << "请给电影进行打分" << endl;
	//2. 用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3. 根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影！" << endl;
		break; //退出当前分支
	case 9:
		cout << "您认为是经典电影！" << endl;
		break; //退出当前分支
	case 8:
		cout << "您认为是非常好的电影！" << endl;
		break; //退出当前分支
	case 7:
		cout << "您认为是非常好的电影！" << endl;
		break; //退出当前分支
	case 6:
		cout << "您认为是一般的电影！" << endl;
		break; //退出当前分支
	case 5:
		cout << "您认为是一般的电影！" << endl;
		break; //退出当前分支
	default:
		cout << "您认为是非常烂的电影！" << endl;
		break;
	}

	//if和switch区别
	//缺点：判断只能是整形或字符型，不能是区间
	//优点：清楚明了，效率高

	system("pause");

	return 0;
}