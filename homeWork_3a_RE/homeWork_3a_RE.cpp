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
    for (int i = 0; i < 6; i++)
    {
        num[i] = a % pow(10, 6 - i);
        cap[i] = a / pow(10, 6 - i);
        a = num[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << cap[i] << ' ';
    }
    cin.get();
}
