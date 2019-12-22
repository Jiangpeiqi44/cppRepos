// homeWork_4d.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
//#define DEBUG
#ifdef DEBUG

int* Func(int* A, int nSize)
{
	int* res = 0, i = 0;
	for (size_t j = 0; j < nSize; j++)
	{

		if (A[j] == 0)
		{
			int temp = A[j];
			A[j] = A[nSize - i - 1];
			A[nSize - i - 1] = temp;
			i++;
		}
	}
	return res = A;
}
#endif //



int main()
{
	int num;
	cin >> num;
	//cin.get();
	int* pt = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> pt[i];
	}
	//int* pt = Func(ptr, num);
	int ptSize = num;
	int box = ptSize - 1;
	int pos;
	int intern_times = 1, extern_times = 1;
	while (box) {
		pos = box;
		box = 0;
		for (int i = 0; i < pos; i++) {
			if (pt[i] > pt[i + 1]) {
				int tmp;
				tmp = pt[i];
				pt[i] = pt[i + 1];
				pt[i + 1] = tmp;
				box = i;
				intern_times++;
			}
		}
		extern_times++;
	}



	for (size_t i = 0; i < num; i++)
	{
		if (pt[i] != 0)
			std::cout << *(pt+i)<< ' ';
	}
	for (size_t i = 0; i < num; i++)
	{
		if (pt[i] == 0)
			std::cout << 0 << ' ';
	}
	/*int cal = 0;
	for (size_t i = 0; i < num; i++)
	{
		if (pt[i] == 0) cal++;

	}
	int* rec = new int[num];
	for (size_t i = 0; i < num-cal; i++)
	{
		rec[i] = pt[cal + i];
	}
	for (size_t i = num-cal; i < num; i++)
	{
		rec[i] = 0;
	}
	for (size_t i = 0; i < num; i++)
	{
		std::cout << rec[i] << ' ';
	}
	*/
	delete[](pt); pt = 0;
	//delete[](rec); rec = 0;

//#include<iostream>
//#include <cstring>
//#include<cmath>
//	using namespace std;
//	void Func(int* A, int nSize)
//	{
//		int k = 0, x = 0;
//		for (k; k < nSize; k++)
//			if (*(A + k) == 0)
//				x++;
//		for (int q = 0, d = 0; q < nSize; q++, d++)
//			for (int i = 0; i < nSize - 1 - d; i++)
//				if (*(A + i) > * (A + i + 1))
//				{
//					int w = *(A + i);
//					*(A + i) = *(A + i + 1);
//					*(A + i + 1) = w;
//				}
//		for (int e = 0; e < nSize; e++)
//		{
//			if (*(A + e) != 0)
//			{
//				if (x == 0)
//					if (e == nSize - 1)
//						cout << *(A + e) << endl;
//					else cout << *(A + e) << ' ';
//				else cout << *(A + e) << ' ';
//			}
//		}
//		for (x; x > 0; x--)
//			if (x != 1)
//				cout << 0 << ' ';
//			else cout << 0 << endl;
//	}
//	int main()
//	{
//		int b, nSize, * A = 0;
//		cin >> nSize;
//		A = new int[10];
//		for (int i = 0; i < nSize; i++)
//		{
//			cin >> b;
//			*(A + i) = b;
//		}
//		Func(A, nSize);
//		delete[]A;
//		return 0;
//	}
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
