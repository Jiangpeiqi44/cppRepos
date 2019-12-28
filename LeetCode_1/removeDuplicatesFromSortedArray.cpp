#include <iostream>
using namespace std;
int removeD(int *arry, int len)
{

    int times(0);
    if (len == 0 || len == 1)
        return len;
    else
        for (size_t i = 0; i < len - 1; i++)
        {
            if (arry[i] == arry[i + 1])
            {
                times++;
            }
        }
    int *temp = new int[len - times];
    int j = 0;
    for (size_t i = 0; i < len - 1; i++)
    {

        if (arry[i] != arry[i + 1])
        {
            temp[j] = arry[i];
            j++;
        }
    }
    if (arry[len - 2] != arry[len - 1])
    {
        temp[j] = arry[len - 1];
    }
    for (size_t i = 0; i < len - times; i++)
    {
        arry[i] = temp[i];
    }
    else temp[j] = arry[len - 2];
    return len - times;
}

int main()
{
    int arry[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int len = sizeof(arry) / sizeof(arry[0]);
    removeD(arry, len);

    cin.get();
}