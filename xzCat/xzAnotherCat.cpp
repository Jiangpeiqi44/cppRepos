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
         << "Press any key to interact with them!" << endl;
    char key[10];
    cin.getline(key, 10);
    cout << "We've been waiting for you all day.Come and play" << endl;
    char answer;
    cin >> answer;
    if (answer == 'y')
    {
        cout << "Meow. We know you love us. We love you too" << endl
             << "How long do you prefer?" << endl;
        int time;
        cin >> time;
        cout << "Well,time flies.It's been more than " << time << " miniutes." << endl
             << "We should leave you with your work.Goodbye" << endl;
        cin.get();
        cin.get();
        delete[] meow;
        meow = NULL;
    }

    if (answer == 'n')
    {
        cout << "Fine. We'll be leaving right now and never come back." << endl;
        delete[] meow;
        meow = NULL;
        cout << "Sorry, all your cats were gone!";
        cin.get();
        cout << "Goodbye!";
        cin.get();
    }
    return 0;
}
