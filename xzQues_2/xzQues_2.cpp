#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
long double fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * fac(n - 1);
}
int main()
{
    int n(0);
    cin >> n;
    cin.get();
    long double *sumPt = new long double[n];
    for (size_t i = 0; i < n; i++)
    {
        sumPt[i] = fac(n - i);
    }

    long double sum(0);
    for (size_t i = 0; i < n; i++)
    {
        sum += sumPt[i];
    }
    cout << setiosflags(ios::fixed);
    cout << setprecision(pow(10, 30))
         << sum;
    //  printf_s("%lf", sum);
    cin.get();
    delete[] sumPt;
    sumPt = NULL;
    return 0;
}
