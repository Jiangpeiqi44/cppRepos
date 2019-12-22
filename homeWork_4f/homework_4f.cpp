// homework_4f.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	struct scr
	{
		string name;
		int score[5] = { 0 };
		float avr = 0;
	}scr1[4];
	//scr* pt[] = { &scr1[0],&scr1[1], &scr1[2], &scr1[3] };
	

	for (size_t i = 0; i < 3; i++)
	{
		cin >> scr1[i].name;
		for (size_t j = 0; j < 5; j++)
		{
			cin >> scr1[i].score[j];
		}

	}
	float sum[3] = { 0 };
	for (size_t j = 0; j < 3; j++)
	{
	for (size_t i = 0; i < 5; i++)
	{
		sum[j] +=scr1[j].score[i];
		scr1[j].avr = sum[j] / 5;
	}
	sum[j]= 0;
	}



	for (size_t j = 0; j < 3; j++)
	{
		for (size_t i = 0; i < 2; i++)
		{
			if (scr1[i].avr < scr1[i + 1].avr)
			{
				scr1[3] = scr1[i];
				scr1[i] = scr1[i + 1];
				scr1[i + 1] = scr1[3];
				/*pt[3] = &scr1[i];
				pt[i] = pt[i + 1];
				pt[i + 1] = pt[3];*/
			}
		}
	}

for (size_t i = 0; i <3; i++)
	{
		cout<< scr1[i].name<<' ';
		for (size_t j = 0; j < 5; j++)
		{
			cout<< scr1[i].score[j]<<' ' ;
		}
		cout << scr1[i].avr<<endl;
	}
}

//#include <iostream>
//using namespace std;
//struct student
//{
//	char name[10];
//	float one[5];
//	float average;
//}data[3];
//float sum;
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		sum = 0;
//		cin >> data[i].name;
//		for (int j = 0; j < 5; j++)
//			cin >> data[i].one[j], sum += data[i].one[j];
//		sum /= 5;
//		data[i].average = sum;
//	}
//	student* pa[3] = { &data[0],&data[1],&data[2] };
//	student* tmp;
//	for (int i = 1; i < 3; i++)
//	{
//		for (int j = 0; j <= 2 - i; j++)
//		{
//			if (pa[j]->average < pa[j + 1]->average)
//			{
//				tmp = pa[j];
//				pa[j] = pa[j + 1];
//				pa[j + 1] = tmp;
//			}
//		}
//
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		cout << pa[i]->name << " " << pa[i]->one[0] << " " << pa[i]->one[1] << " " << pa[i]->one[2] << " " << pa[i]->one[3] << " " << pa[i]->one[4] << " " << pa[i]->average << endl;
//	}
//	return 0;
//}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
