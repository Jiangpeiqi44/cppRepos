

#include <iostream>
using namespace std;

int *Func(int *A, int nSize);
int main()
{
    cout << "请输入元素个数" << endl;
    int n(0);
    cin >> n;
    cin.get();
    int *pt = new int[n];
    int *res = NULL;
    for (size_t i = 0; i < n; i++)
    {
        cin >> pt[i];
    }

    cin.get();
    res = Func(pt, n);
    cout << "输出结果为" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << res[i] << ' ';
    }

    cin.get();
    delete[] pt;
    pt = NULL;
    res = NULL;
}
int *Func(int *A, int nSize)
{

    int times(0);
    for (size_t i = 0; i < nSize; i++)
    {
        if (A[i] == 0)
        {
            times++;
        }
    }

    for (size_t j = 0; j < nSize - 1; j++)
    {
        for (size_t i = 0; i < nSize - 1 - j; i++)
        {
            int hold(0);
            if (A[i] >= A[i + 1])
            {
                hold = A[i];
                A[i] = A[i + 1];
                A[i + 1] = hold;
            }
        }
    }
    static int *holdArry = new int[nSize];

    for (size_t i = 0; i < nSize; i++)
    {
        holdArry[i] = 0;
    }

    for (size_t i = 0; i < nSize - times; i++)
    {
        holdArry[i] = A[times + i];
    }

    return holdArry;
}