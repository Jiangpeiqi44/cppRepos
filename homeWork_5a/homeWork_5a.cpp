#include <iostream>
using namespace std;
class homeWork_5a
{
private:
	/* data */
	double len, wid;
public:
	homeWork_5a(double inlen, double inwid);
	~homeWork_5a();
	double compare();
};

homeWork_5a::homeWork_5a(double inlen, double inwid)
{
	len = inlen; wid = inwid;
}

homeWork_5a::~homeWork_5a()
{
}
double homeWork_5a:: compare()
{
	double S = len * wid;
	return S;
}


int main()
{
	double paramA, paramB, S1, S2, Sn;
	cin >> paramA >> paramB;
	homeWork_5a inRectan(paramA, paramB), rectan1(5.2, 4.3), rectan2(100, 20);
	

	Sn = inRectan.compare();

	S1 = rectan1.compare();

	S2 = rectan2.compare();

	if (Sn >= S1 && Sn >= S2)
	{
		cout << Sn;
	}
	if (S1 >= Sn && S1 >= S2)
	{
		cout << S1;
	}
	if (S2 >= S1 && S2 >= Sn)
	{
		cout << S2;
	}
return 0;
}