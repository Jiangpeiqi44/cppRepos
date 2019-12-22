// homeWork3_c.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;
int factorial(int n,int m)
{
	if (m== 0)
		return 1;          
	else
		return n * factorial(n - 1,m-1);// 4 3   432     4 2 43
}
int main()
{
	int n, m,A;
	cin >> n >> m;
	A = factorial(n, m);
	cout << A;
}

