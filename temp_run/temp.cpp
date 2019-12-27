#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    unsigned short int array[t][2];

    int i;
    for (i = 0; i < t; i++)
    {
        cin >> array[i][0] >> array[i][1];
    }

    int n, m;
    for (i = 0; i < t; i++)
    {
        int num = 0;
        for (n = 0; n < 16; n++)
        {
            m = array[i][0] >> 15;          //取最高位
            array[i][0] = array[i][0] << 1; //左移
            array[i][0] += m;               //最高位补到最低位
            if (array[i][0] == array[i][1])
            {
                cout << "yes" << endl;
                num++;
                break;
            }
        }
        if (num == 0)
        {
            cout << "no" << endl;
        }
    }
    cin.get();
    cin.get();
    return 0;
}