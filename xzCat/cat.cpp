#include <iostream>
#define cat int
using namespace std;
int main()
{
    int N;
    cout << "Please enter the number of your cats!" << endl;
    cin >> N;
    cin.get();
    cat *meow = new cat[N];
    cout << "Now you have " << N << " cats in your memory" << endl
         << "Press any key to interact with them!";
    cin.get();
    delete[] meow;
    meow = NULL;
    cout << "Pointer delete! Sorry, all your cats were gone!";
    cin.get();
    cout << "Goodbye!";
    cin.get();
    return 0;
}