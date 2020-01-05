#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>

#include <ctime>
#define random(x) rand() % (x)
using namespace std;
float f(float x, float y, float z)
{
    float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
    return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}
float h(float x, float z)
{
    for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
        if (f(x, y, z) <= 0.0f)
            return y;
    return 0.0f;
}
void catHeart()
{
    for (float z = 1.5f; z > -1.5f; z -= 0.05f)
    {
        for (float x = -1.5f; x < 1.5f; x += 0.025f)
        {
            float v = f(x, 0.0f, z);
            if (v <= 0.0f)
            {
                float y0 = h(x, z);
                float ny = 0.01f;
                float nx = h(x + ny, z) - y0;
                float nz = h(x, z + ny) - y0;
                float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
}
#ifdef WIN_ONLY
#include <tchar.h>
#include <windows.h>
void heart()
{
    HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
    _TCHAR buffer[25][80] = {_T(' ')};
    _TCHAR ramp[] = _T(".:-=+*#%@");
    for (float t = 0.0f;; t += 0.1f)
    {
        int sy = 0;
        float s = sinf(t);
        float a = s * s * s * s * 0.2f;
        for (float z = 1.3f; z > -1.2f; z -= 0.1f)
        {
            _TCHAR *p = &buffer[sy++][0];
            float tz = z * (1.2f - a);
            for (float x = -1.5f; x < 1.5f; x += 0.05f)
            {
                float tx = x * (1.2f + a);
                float v = f(tx, 0.0f, tz);
                if (v <= 0.0f)
                {
                    float y0 = h(tx, tz);
                    float ny = 0.01f;
                    float nx = h(tx + ny, tz) - y0;
                    float nz = h(tx, tz + ny) - y0;
                    float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
                    float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
                    *p++ = ramp[(int)(d * 5.0f)];
                }
                else
                    *p++ = ' ';
            }
        }

        for (sy = 0; sy < 25; sy++)
        {
            COORD coord = {0, sy};
            SetConsoleCursorPosition(o, coord);
            WriteConsole(o, buffer[sy], 79, NULL, 0);
        }
        Sleep(33);
    }
}
#endif // WIN_ONLY

enum catBreed
{
    americanShortHair = 1,
    burmese,
    englishShoryHair,
    ragdoll,
    persian,
    bobtail

};

class cat
{
private:
    int catAge, catNum, love, brd;
    int *catHome;
    double catWeight;
    string catName, catBrd, masterName;
    catBreed myCat;
    const char *outBrd[6] = {"americanShortHair", "burmese", "englishShoryHair", "ragdoll", "persian", "bobtail"};

public:
    cat(int catAge_, int catNum_, int love_, double catWeight_, string catName_, int brd, string masterName_);
    ~cat();
    void raiseCat();
    void interact();
    void getHerBack();
    void showHome();
    void stat();
};
void cat::stat()
{
    if (catNum > 1)
    {
        cout << "Your lovely " << outBrd[myCat - 1] << " named " << catName << " now lives in " << catHome << " with other " << catNum - 1 << " cats" << endl;
    }
    else
    {
        cout << "Your only lovely " << myCat << " named " << catName << " now lives in " << catHome << endl;
    }
    cin.get();
    cout << catName << " was " << catAge << " years old, and "
         << " weights " << catWeight << " and you have played with her for " << love << " times" << endl;
}
void cat::showHome()
{
    cout << "Your cats live happily in " << catHome << " !" << endl;
}
void cat::getHerBack()
{
    cout << "Your cats are leaving!\n"
         << "Keep clicking enter to save her!\n";
    for (size_t i = 0; i < random(20); i++)
    {
        cin.get();
    }
    cout << "I'm sorry……\n";
}
void cat::interact()
{
    string inputName_;
    if (love < 10)
    {
        cout << "Call her name to interact!\n";
        cin >> inputName_;
        cin.get();
        if (catName == inputName_)
        {
            int randTimes = random(50);
            cout << "Meow!\nNow keep clicking enter to cuddle your cat!\n";
            for (size_t i = 1; i < randTimes + 1; i++)
            {
                if (i <= randTimes / 4)
                {
                    cin.get();
                    cout << "Meow~\n Keep cuddling me !\n";
                }
                else if (i <= randTimes / 2)
                {
                    cin.get();
                    cout << "Comfy~ !\n";
                }
                else
                {
                    cin.get();
                    cout << "Don't stop~ !\n";
                }
                if (i == randTimes - 1)
                {
                    cout << "Almost there !\n";
                    cin.get();
                }
            }
            cout << "Congrats! Now your cat likes you much more than before !\n";
            love++;
        }
        else
        {
            cout << "I can't believe it...\n You don't even remember my name !\nYou don't love me...\n";
            getHerBack();
        }
    }

    else
    {
        catHeart();
        cout << "Call me by your name~\n";
        cin >> inputName_;
        cin.get();
        if (masterName == inputName_)
        {
            int randTimes = random(50);
            cout << "Meow!\nNow keep clicking enter to cuddle your cat!\n";
            for (size_t i = 1; i < randTimes + 1; i++)
            {
                if (i <= randTimes / 4)
                {
                    cin.get();
                    cout << "Meow~\n Keep cuddling me !\n";
                }
                else if (i <= randTimes / 2)
                {
                    cin.get();
                    cout << "Comfy~ !\n";
                }
                else
                {
                    cin.get();
                    cout << "Don't stop~ !\n";
                }
                if (i == randTimes - 1)
                {
                    cout << "\n Almost there !\n";
                    cin.get();
                }
            }
            cout << "Congrats! Now your cat likes you much more than before !\n";
            love++;
        }
        else
        {
            cout << "I can't believe it……\n You don't even turst me !\nYou don't love me……\n";
            getHerBack();
        }
    }
    catAge = love / 10;
}
void cat::raiseCat()
{
    string ans;
    cout << "Are you sure you want to raise " << catNum << ' ' << outBrd[myCat - 1] << " cats in your home?" << endl;
    cin.get();
    cout << "Please enter your reasons!" << endl;

    do
    {
        cin >> ans;
        cin.get();
        cout << "Too bad,your cats don't want to live with you!" << endl
             << "Please re-enter!" << endl;
        cin.get();

    } while (ans.length() <= random(10));

    int *meow = new int[catNum];
    cout << "Congrats! Now your cats are living happily in " << meow << endl;
    //  << "Press any key to continue !" << endl;
    cin.get();
    cin.get();
    catHome = meow;
}
cat::cat(int catAge_, int catNum_, int love_, double catWeight_, string catName_, int brd, string masterName_)
{
    catAge = catAge_;
    catNum = catNum_;
    catWeight = catWeight_;
    catName = catName_;
    myCat = (catBreed)brd;
    love = love_;
    masterName = masterName_;
    cout
        << "Congrats! Now you purchased a " << outBrd[myCat - 1] << " named " << catName << endl
        << "Now you have " << catNum << " lovely pussy cats!" << endl
        << "Press any key to countinue!" << endl;

    cin.get();
}

cat::~cat()
{
    cout << "Your cats are leaving!\n";
}

int main()
{
    int catAge(1), catNum, love(1), brd(0);
    double catWeight(random(100));
    string catName, masterName;

    srand((int)time(0));
    cout << "Hello there!\nI'm OS1,your personal cat assitant.";
    cin.get();
    cout << "Please tell me what's your name!\n";
    cin >> masterName;
    cin.get();
    cout << "OK! Now please select your cat's breed!";
    // << "Press enter to countinue" << endl;
    cin.get();
    cout << "you can choose from ..." << endl;
    cin.get();
    cout << "1.AmericanShortHair\n2.Burmese\n3.EnglishShortHair\n4.Ragdoll\n5.Persian\n6.Bobtail" << endl;
    cin >> brd;
    cin.get();

    do
    {
        cout << "Now,how many cats do you prefer?" << endl;
        cin >> catNum;
        cin.get();
        if (catNum > 0)
        {
            if (catNum >= 10)
            {
                cout << "Alright, that's quite a lot!";
                cin.get();
                cout << "Now pick a name for your favorite one !" << endl;
                cin >> catName;
                cin.get();
            }
            else
            {
                cout << "OK, let's move on!" << endl;
                cin.get();
                cout << "Now pick a name for your favorite one !" << endl;
                cin >> catName;
                cin.get();
            }
        }
        else
        {
            cout << "Are you sure you don't want to have a cat ?!" << endl;
        }
    } while (catNum <= 0);

    cat xzCat(catAge, catNum, love, catWeight, catName, brd, masterName);
    int corresNum(0), exitNum(1);
    cout << "Now you can choose what you want to do with your cat !\nPress enter to continue!";
    cin.get();
    do
    {

        cout << "Choose the corresponding number ahead to countinue !\n"
             << "1. Raise cat" << endl
             << "2. Interact with her" << endl
             << "3. Show your cats' home " << endl
             << "4. Show your cat's imformation" << endl
             << "..." << endl;
        cin >> corresNum;
        cin.get();
        if (corresNum == 1)
        {
            xzCat.raiseCat();
        }
        else if (corresNum == 2)
        {
            xzCat.interact();
        }
        else if (corresNum == 3)
        {
            xzCat.showHome();
        }
        else if (corresNum == 4)
        {
            xzCat.stat();
        }
        else
        {
            break;
        }
        cin.get();
        cout << "Input number 0 to exit , input any other number to continue!\n";
        cin >> exitNum;
        cin.get();
    } while (exitNum != 0);

    cout << "Thanks for playing!\n See you next time!\n"
         << "There still something I wanna say... the Cat said." << endl;
    cin.get();
    cout << "Are you willing to hear it?\nY or N?\n";
    char YorN(0);
    cin >> YorN;
    cin.get();
    if (YorN == 'Y')
    {
        catHeart();
    }

    else
    {
        cout << "Maybe next time!" << endl;
    }

    cin.get();
    return 0;
}