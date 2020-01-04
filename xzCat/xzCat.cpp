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
    char key[10];
    cin.getline(key, 10);
    cout << "We've been waiting for you all day.Come and play" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y')
    {
        cout << "Meow. We know you love us. We love you too3" << endl;
    }

    if (answer == 'n')
    {
        cout << "Fine. We'll be leaving now." << endl;
        delete[] meow;
        meow = NULL;
        cout << "Pointer delete! Sorry, all your cats were gone!";
        cin.get();
        cout << "Goodbye!";
        cin.get();
    }
    return 0;
}
