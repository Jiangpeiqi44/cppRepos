#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "������ip��ַ" << endl;
    cin >> a;
    cin.get();
    cin >> b;
    cin.get();
    cin >> c;
    cin.get();
    cin >> d;
    cout << "ip��ַ��16����Ϊ" << endl
         << setiosflags(ios::uppercase) //ת��Ϊ��д

         << hex << a << b << c << d; // or  ios::hex
    cin.get();
    cin.get();
    return 1;
}