#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "请输入ip地址" << endl;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cin.get();
    cin >> d;
    cout << "ip地址的16进制为" << endl
         << setiosflags(ios::uppercase) //转换为大写

         << hex << a << b << c << d; // or  ios::hex
    cin.get();
    cin.get();
    return 1;
}