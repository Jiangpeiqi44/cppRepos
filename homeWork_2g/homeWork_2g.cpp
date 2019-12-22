#include <iostream>
using namespace std;

int special(int x);

int main()
{
	int sum(0);
	struct sb
	{
		int yy;
		int mm;
		int dd;

	};

	sb time;
	cin >> time.yy >> time.mm >> time.dd;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int specialdays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (special(time.yy))
	{
		for (size_t i = 0; i < time.mm - 1; i++)
		{
			sum += specialdays[i];

		}
	}
	else
	{
		for (size_t i = 0; i < time.mm - 1; i++)
		{
			sum += days[i];

		}
	}
	sum = sum + time.dd;
	cout << time.yy << "年" << time.mm << "月" << time.dd << "日是本年中的第" << sum << "天。";
}
int special(int year)
{
	if (year % 100)
	{
		if (year % 4)
			return 0;
		else
			return 1;


	}
	else
	{
		if (year % 400)
			return 0;
		else
			return 1;
	}

}