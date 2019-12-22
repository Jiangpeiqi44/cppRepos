#include <iostream>
#include<cstring>
using namespace std;

#ifdef DEBUG
class Employee
{
private:
	int id;
public:
	Employee(/* args */);
	~Employee();
};

Employee::Employee(/* args */)
{
}

Employee::~Employee()
{
}

#endif // DEBUG

 


int main() {

	int id; int yy, mm, salary(0);
	cin >> id >> yy >> mm;
	string str1;


	

		
			switch (id)
			{
			case 1:

				salary = ((yy - 2000) * 12 + mm - 10) * 5000;
				str1 = "wang";
					break;
			case 2:
				salary = ((yy - 2008) * 12 + mm - 1) * 4500;
				str1 = "liu";
					break;
			case 3:
				salary = ((yy - 2003) * 12 + mm - 7) * 3800;
				str1 = "huo";
					break;
			case 4:
				salary = ((yy - 2015) * 12 + mm - 4) * 5300;
				str1 = "ma";
					break;
			case 5:
				salary = ((yy - 2016) * 12 + mm - 3) * 6000;
				str1 = "meng";
					break;

			default:
				break;
			}
				
			cout << str1 << ' ' << salary;

	return 0;
}