#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    long double sum = 0, a = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a *= i;
        sum += a;
    }
    cout << setiosflags(ios::fixed);
    cout << setprecision(pow(10, 30))
         << sum;
    //printf_s("%lf", sum);
    cin.get();
    cin.get();
}
//只有vs2019运行能正常显示   错误显示为0.0000000
