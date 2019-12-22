#include <iostream>
using namespace std;

class time
{
private:
	int yy, mm, dd;
public:
	time(int a, int b, int c);
	~time();
	//void showtime(int a, int b, int c);
	void showtime(int a, int b, int c, double d);
};

time::time(int a, int b, int c)
{
	yy = a; mm = b; dd = c;
}

time::~time()
{
}

void time::showtime(int a, int b, int c, double d)
{
	if ((int)d == d)
	{
		cout << a << '-' << b << '-' << c;
	}
	else
	{
		cout << a << "年" << b << "月" << c << "日";
	}
}



int main() {

	int a, b, c;
	double d=0;
	cin >> a >> b >> c >> d;
	time t1(a, b, c);
	t1.showtime(a, b, c, d);
#ifdef DEBUG
	if ((int)d == d)
	{
		cout << a << '-' << b << '-' << c;
	}
	else
	{
		cout << a << "年" << b << "月" << c << "日";
	}
#endif // DEBUG

	


	return 0;
}