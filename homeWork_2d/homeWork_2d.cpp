// homeWork_2d.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//数组使用

#include<iostream>
using namespace std;

int main()
{

	cout << "1 2 3 4 5 6 7 8 9 10" << endl

		<< "11 12 13 14 15 16 17 18 19 20 " << endl

		<< "21 22 23 24 25 26 27 28 29 30" << endl

		<< "31 32 33 34 35 36 37 38 39 40 " << endl


		<< "41 42 43 44 45 46 47 48 49 50 " << endl


		<< "51 52 53 54 55 56 57 58 59 60 " << endl


		<< "61 62 63 64 65 66 67 68 69 70" << endl


		<< "71 72 73 74 75 76 77 78 79 80" << endl


		<< "81 82 83 84 85 86 87 88 89 90" << endl


		<< "91 92 93 94 95 96 97 98 99 100" << endl


		<< "3 4 6 8 12 14 18 20 24 30" << endl


		<< "32 38 42 44 48 54 60 62 68 72" << endl


		<< "74 80 84 90 98";

}

//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int Array[100],a0=1;
	for(int i=0;i<100;i++)
		Array[i]=a0++;
	for(int r=0;r<10;r++){
		for(int c=0;c<10;c++)
			cout<<Array[10*r+c]<<' ';
	cout<<endl;
	}
	int m(2),count(0),a(1);
	while(m<=100)
	{
		int i;
		double k=sqrt(double(m));
		for(i=2;i<=k+1;i++)
		{
			if(m%i==0) break;
		}
		if(a==1)
		{
			cout<<Array[2]<<' ';
			a++;
			count++;
		}
		if(i>=k+1)
		{
			cout<<Array[m]<<' ';
			if(count<=8) count++;
			else if(count==9) {cout<<Array[m];count++;}
			else if(count==10) {cout<<endl;count=0;}
		}
			
		m++;

	}
	cout<<endl;
	//system("pause");
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
