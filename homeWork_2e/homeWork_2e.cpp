#include<iostream>
using namespace std;

int main()
{
	double aa1[8];
	int hold;
	for (int i = 0; i < 8; i++)

	{
		cin >> aa1[i];
	};


	for (int j = 0; j < 7; j++)
		for (int b = 0; b < 7; b++)
			if (aa1[b] < aa1[b + 1])
			{
				hold = aa1[b];
				aa1[b] = aa1[b + 1];
				aa1[b + 1] = hold;
			}

	cout << "平均成绩是" << double((aa1[1] + aa1[2] + aa1[3] + aa1[4] + aa1[5] + aa1[6]) / 6);



}