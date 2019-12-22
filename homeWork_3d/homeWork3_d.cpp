// homeWork3_d.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


bool detmin(int b[])
{
	for (size_t i = 0; i < 10; i++)
	{

		if (b[0] != b[i ])
		{
			return 1;
			break;
		}

	}
	return 0;

}
void pass(int a[])
{
	int b[10], c[10];
	int count = 0;
	for (size_t i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}
	while (detmin(c))
	{
		for (size_t i = 1; i < 10; i++)
		{
			b[i] = c[i] / 2;
			b[i] += 0.5 * c[i - 1];
		}
		b[0] = c[0] / 2;
		b[0] += 0.5 * c[9];
		for (size_t i = 0; i < 10; i++)
		{
			if (b[i] % 2 != 0)
			{
				b[i] += 1;
			}
		}
		count++;
		for (size_t i = 0; i < 10; i++)
		{
			c[i] = b[i];
		}
	}
		
	
		

	cout << count << ' ' << c[0];
}


int main()
{
	int a[10];
	for (size_t i = 0; i < 10; i++)
	{
		cin >> a[i];

	}
	
	 pass(a);
	

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
