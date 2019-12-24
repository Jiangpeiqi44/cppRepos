#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "please enter number of candidates" << endl; //gbk
	cin >> a;
	cin.get();
	cout << "please enter the number of winners" << endl;
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