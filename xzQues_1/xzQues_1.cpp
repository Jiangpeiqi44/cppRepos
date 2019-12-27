// xzQues_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int* pt = new int[2*t];
	int* time = new int[t];

	cin.get();
	for (size_t i = 0; i < 2*t; i++)
	{
		cin >> *(pt+i);
		cin.get();
	}

	for (size_t i = 0; i < t; i++)
	{
		time[i] = 0;
	}
	for (size_t i = 0; i < t; i++)
	{
			switch (*(pt +2*i) >= *(pt + 1 +2*i))
		{
		case 0:
			
				do
				{
					*(pt + 2*i) = (*(pt + 2*i) << 1);
					cout << "位移1次" << endl;
					time[i]++;
				} while ((*(pt + 2*i) != *(pt + 2*i + 1)) && (time[i] <= 16 * t));
						
			break;
		case 1:
			
				do
				{
					*(pt + 2*i+1) = (*(pt + 2 * i+1) << 1);
					cout << "位移1次" << endl;
					time[i]++;
				} while ((*(pt + 2 * i) != *(pt + 2 * i + 1)) && (time[i] <= 16 * t));
			
			
			break;
		default:
			cout << "输入有误";
			break;
		}
	}
	
	
	

	

	for (size_t i = 0; i < t; i++)
	{
		if (time[i]<=16)
		{
			cout << "第" << i+1 << "组位移" << time[i] << "次成功" << endl;

		}
		else
		{
			cout << "第" << i+1 << "组位移失败！" << endl;
		}
	}


	delete[]time;
	delete[]pt;
	pt = NULL;
	time = NULL;
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
