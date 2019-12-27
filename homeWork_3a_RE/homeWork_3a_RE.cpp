#include <cmath>
#include <iostream>
using namespace std;

main()
{

    int a(0);
    cout << "请输入任意整数" << endl;
    cin >> a;
    cin.get();
    int num[6] = {0};
    int cap[6] = {0};
    int temp(0);
    int len(0);
    for (size_t i = 0; i < 6; i++)
    {
        if (a / pow(10, 6 - i) != 0)
        {
            len++;
        }
    }

    for (int i = 0; i < len + 1; i++)
    {
        temp = pow(10, len - i);
        num[i] = a % temp;
        cap[i] = a / temp;
        a = num[i];
    }
    cout << "拆分结果为：" << endl;
    for (int i = 0; i < len + 1; i++)
    {
        if (cap[i] != 0)
        {
            cout << cap[i] << ' ';
        }
    }
    cin.get();
}
