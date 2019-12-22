#include<iostream>
using namespace std;

double pre(double a[])
{
	double b[10];
	for (size_t i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	for (size_t j = 0; j < 9; j++)
	{
		for (size_t i = 0; i < 9; i++)
		{
			if (b[i]>b[i+1])
			{
				double hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;
			};
		}

	}
	double sum=0;
	for (size_t i = 1; i < 9; i++)
	{
		
		sum+= b[i];
	}
	
	double avr = sum / 8.0;
	return avr ;
}

double finale(double a[])
{
	double b[10];
	for (size_t i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	for (size_t j = 0; j < 9; j++)
	{
		for (size_t i = 0; i < 9; i++)
		{
			if (b[i] > b[i + 1])
			{
				double hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;
			};
		}

	}
	double sum=0;
	for (size_t i = 2; i < 8; i++)
	{

		sum += b[i];
	}

	double avr = sum / 6.0;
	return avr;
}


int main()
{
	double scr[11];
	for (size_t i = 0; i < 11; i++)
	{
		cin>>scr[i];
	}
	if (scr[10]==1)
	{
		cout << pre(scr);
	}
	if (scr[10] == 2)
	{
		cout << finale(scr);
	}


}





//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//double num[10];
//double set, sum;
//void sol()
//{
//	sort(num, num + 10);
//	if (set == 1)
//	{
//		for (int i = 1; i <= 8; i++)
//			sum += num[i];
//		sum /= 8;
//	}
//	else
//	{
//		for (int i = 2; i <= 7; i++)
//			sum += num[i];
//		sum /= 6;
//	}
//
//}
//int main()
//{
//	for (int i = 0; i <= 9; i++)
//		cin >> num[i];
//	cin >> set;
//	sol();
//	cout << sum;
//	return 0;
//}