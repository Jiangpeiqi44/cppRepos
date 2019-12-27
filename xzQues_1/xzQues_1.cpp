// xzQues_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t, time(0);
	cin >> t;
	int* pt = new int[2*t];

	cin.get();
	for (size_t i = 0; i < 2*t; i++)
	{
		cin >> *(pt+i);
		cin.get();
	}

	for (size_t i = 0; i < t; i++)
	{
		switch (*(pt +i) >= *(pt + 1 +i))
		{
		case 0:
			for (size_t i = 0; i < t; i++)
			{
				do
				{
					*(pt + i) = (*(pt + i) << 1);
					cout << "位移1次" << endl;
					time++;
				} while ((*(pt + i) != *(pt + i + 1)) && (time <= 16 * t));
			}
			delete[]pt;
			break;
		case 1:
			for (size_t i = 0; i < t; i++)
			{
				do
				{
					*(pt + i+1) = (*(pt + i+1) << 1);
					cout << "位移1次" << endl;
					time++;
				} while ((*(pt + i) != *(pt + i + 1)) && (time <= 16 * t));
			}
			delete[]pt;
			break;
		default:
			cout << "输入有误";
			break;
		}
	}
	
	
	

	if (time<= 16 * t)
	{
		cout << "位移成功，共" << time << "次";
	}
	else
	{
		cout << "无法通过位移得到！";
	}

	return 1;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
