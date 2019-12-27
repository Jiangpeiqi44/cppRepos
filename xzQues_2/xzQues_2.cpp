#include <iostream>
using namespace std;
unsigned long long int fac(int n)
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
    unsigned long long int *sumPt = new unsigned long long int[n];
    for (size_t i = 0; i < n; i++)
    {
        sumPt[i] = fac(n - i);
    }

    unsigned long long int sum(0);
    for (size_t i = 0; i < n; i++)
    {
        sum += sumPt[i];
    }
    cout << sum;
    cin.get();
    delete[] sumPt;
    sumPt = NULL;
    return 0;
}