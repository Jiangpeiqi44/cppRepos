#include<iostream>
using namespace std;

int main()
{
	int aa1[10];
	int hold;
	for (int i = 0; i < 10; i++)

	{
		cin >> aa1[i];
	};


	for (int j = 0; j < 9; j++)
		for (int b = 0; b < 9; b++)
			if (aa1[b] < aa1[b + 1])
			{
				hold = aa1[b];
				aa1[b] = aa1[b + 1];
				aa1[b + 1] = hold;
			};

	for (int i = 9; i > 0; i--)

	{
		cout << aa1[i] << ' ';

	};
	cout << aa1[0];


}