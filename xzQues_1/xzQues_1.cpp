

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cout << "请输入组数" << endl;
	cin >> t;
	int *pt = new int[2 * t];
	int *time = new int[t];

	cin.get();
	cout << "请输入要判断的数，用空格隔开" << endl;
	for (size_t i = 0; i < 2 * t; i++)
	{
		cin >> *(pt + i);
		cin.get();
	}

	for (size_t i = 0; i < t; i++)
	{
		time[i] = 0;
	}
	for (size_t i = 0; i < t; i++)
	{
		switch (*(pt + 2 * i) >= *(pt + 1 + 2 * i))
		{
		case 0:

			do
			{
				*(pt + 2 * i) = (*(pt + 2 * i) << 1);
				cout << "位移一次" << endl;
				time[i]++;
			} while ((*(pt + 2 * i) != *(pt + 2 * i + 1)) && (time[i] <= 16 * t));

			break;
		case 1:

			do
			{
				*(pt + 2 * i + 1) = (*(pt + 2 * i + 1) << 1);
				cout << "位移一次" << endl;
				time[i]++;
			} while ((*(pt + 2 * i) != *(pt + 2 * i + 1)) && (time[i] <= 16 * t));

			break;
		default:
			cout << "输入有误！";
			break;
		}
	}

	for (size_t i = 0; i < t; i++)
	{
		if (time[i] <= 16)
		{
			cout << "第" << i + 1 << "组位移" << time[i] << "次成功" << endl;
		}
		else
		{
			cout << "第" << i + 1 << "无法通过位移得到" << endl;
		}
	}
	cout << "按任意键退出";

	delete[] time;
	delete[] pt;
	pt = NULL;
	time = NULL;
	cin.get();
	cin.get();
	return 0;
}
