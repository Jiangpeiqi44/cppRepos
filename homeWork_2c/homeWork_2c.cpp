#include<iostream>
using namespace std;
int main()
{
	int a = 10, b = 5, c = 3, d = 20, e = 13, n1, n2, n3, n4, n5;
	char t1, t2, t3, t4, t5;
	//t:类型 ，n：数量
	int cal1 = 0, cal2 = 0, cal3 = 0, cal4 = 0, cal5 = 0;

	cin >> t1 >> n1
		>> t2 >> n2
		>> t3 >> n3
		>> t4 >> n4
		>> t5 >> n5;


	switch (t1)
	{
	case 'A':
		cal1 = a * n1;
		break;
	case 'B':
		cal2 = b * n1;
		break;
	case 'C':
		cal3 = c * n1;
		break;
	case 'D':
		cal4 = d * n1;
		break;
	case 'E':
		cal5 = e * n1;
		break;

	default:
		break;
	}
	//cin >> t2 >> n2;
	switch (t2)
	{
	case 'A':
		cal1 = a * n2;
		break;
	case 'B':
		cal2 = b * n2;
		break;
	case 'C':
		cal3 = c * n2;
		break;
	case 'D':
		cal4 = d * n2;
		break;
	case 'E':
		cal5 = e * n2;
		break;

	default:
		break;
	}
	//cin >> t3 >> n3;
	switch (t3)
	{
	case 'A':
		cal1 = a * n3;
		break;
	case 'B':
		cal2 = b * n3;
		break;
	case 'C':
		cal3 = c * n3;
		break;
	case 'D':
		cal4 = d * n3;
		break;
	case 'E':
		cal5 = e * n3;
		break;

	default:
		break;
	}
	//cin >> t4 >> n4;
	switch (t4)
	{
	case 'A':
		cal1 = a * n4;
		break;
	case 'B':
		cal2 = b * n4;
		break;
	case 'C':
		cal3 = c * n4;
		break;
	case 'D':
		cal4 = d * n4;
		break;
	case 'E':
		cal5 = e * n4;
		break;

	default:
		break;
	}
	//	cin>> t5 >> n5;
	switch (t5)
	{
	case 'A':
		cal1 = a * n5;
		break;
	case 'B':
		cal2 = b * n5;
		break;
	case 'C':
		cal3 = c * n5;
		break;
	case 'D':
		cal4 = d * n5;
		break;
	case 'E':
		cal5 = e * n5;
		break;

	default:
		break;
	}
	int sum = cal1 + cal2 + cal3 + cal4 + cal5;
	cout << sum << endl;
		
	
}