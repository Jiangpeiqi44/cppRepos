#include <iostream>
using namespace std;

int func_1(int a,int b)
{
	int interg;
	interg = a / b;
	return interg;
}
int func_2(int a, int b)
{
	int residue;
	residue = a % b;
	return residue;
}
int main()
{
	int a, b(10);
	cin >> a;
	if ((a/10)<1)
	{
		cout << a;
	}
	if ((a / 10 > 1)&& (a / 10 <10))
	{
		int residue1 = func_2(a, b);   //21: 2 1
		int interg1 = func_1(a, b);
		cout << interg1 << ' ' << residue1;
	}


	if ((a / 10 > 10) && (a / 10 < 100))
	{
		int residue1 = func_2(a, b);   //321: 32 1
		int interg1 = func_1(a, b);
		int residue2 = func_2(interg1, b);   // 32: 3 2
		int interg2 = func_1(interg1, b);
		cout << interg2 << ' ' << residue2 << ' ' << residue1;
	}
	if ((a / 10 > 100) && (a / 10 < 1000))
	{
		int residue1 = func_2(a, b);   //4321: 432 1
		int interg1 = func_1(a, b);
		int residue2 = func_2(interg1, b);   // 432: 43 2
		int interg2 = func_1(interg1, b);
		int residue3 = func_2(interg2, b);   // 43: 4 3
		int interg3 = func_1(interg2, b);
		cout << interg3 << ' ' << residue3<< ' ' << residue2 << ' ' << residue1;
	}
	if ((a / 10 > 1000) && (a / 10 < 10000))
	{
		int residue1 = func_2(a, b);  
		int interg1 = func_1(a, b);
		int residue2 = func_2(interg1, b);   
		int interg2 = func_1(interg1, b);
		int residue3 = func_2(interg2, b);   
		int interg3 = func_1(interg2, b);
		int residue4 = func_2(interg3, b);
		int interg4 = func_1(interg3, b);
		cout << interg4 << ' ' << residue4<< ' ' << residue3 << ' ' << residue2 << ' ' << residue1;
	}


	

}