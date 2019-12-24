#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "请输入抽奖人数" << endl;
	cin >> a;
	cin.get();
	cout << "请输入中奖人数" << endl;
	cin >> b;
	cin.get();
	if (a >= b)
	{
		cout << "congratulations on XiaozhouZhang!";
	}
	else
	{
		cout << "error";
	}
	cin.get();
	cin.get();
}