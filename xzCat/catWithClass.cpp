#include <cstring>
#include <iostream>
using namespace std;
#include <ctime>
#define random(x) rand() % (x)
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
    int catAge, catNum, love;
    int *catHome;
    double catWeight;
    string catName, catBrd, masterName;
    catBreed myCat;

public:
    cat(int catAge_, int catNum_, int love_, double catWeight_, string catName_, string catBrd_, string masterName_);
    ~cat();
    void raiseCat(int num, string catBrd_);
    void interact();
    void getHerBack();
    void showHome();
};
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
        std::cin.get();
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
            cout << "I can't believe it……\n You don't even remember my name !\nYou don't love me……\n";
            getHerBack();
        }
    }

    else
    {
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
}
void cat::raiseCat(int num, string catBrd_)
{
    string ans;
    cout << "Are you sure you want to raise " << num << ' ' << catBrd << " cats in your home?" << endl
         << "Please enter your reasons!" << endl;

    do
    {
        cin >> ans;
        cin.get();
        cout << "Too bad,your cats don't want to live with you!" << endl
             << "Please re-enter!" << endl;
        cin.get();

    } while (ans.length() <= 20);

    int *meow = new int[num];
    cout << "Congrats! Now your cats are living happily in " << meow << endl
         << "Press any key to continue !" << endl;
    cin.get();
    catHome = meow;
}
cat::cat(int catAge_, int catNum_, int love_, double catWeight_, string catName_, string catBrd_, string masterName_)
{
    catAge = catAge_;
    catNum = catNum_;
    catWeight = catWeight_;
    catName = catName_;
    catBrd = catBrd_;
    love = love_;
    masterName = masterName_;
    cout
        << "Congrats! Now you purchased a " << catBrd << " named " << catName << endl
        << "Your also have " << catNum - 1 << " other lovely pussy cat!" << endl
        << "Press any key to countinue!" << endl;

    cin.get();
}

cat::~cat()
{
    cout << "Your cats are leaving!\n";
}

int main()
{
    int catAge(1), catNum, love(1);
    int *catHome = NULL;
    double catWeight(100);
    string catName, catBrd, masterName;
    catBreed myCat;
    srand((int)time(0));
    cout << "Hello there!\nI'm OS1,your personal cat assitant.\n";
    cin.get();
    cout << "Please tell me what's your name!\n";
    cin >> masterName;
    cin.get();
    cout << "OK! Now please select your cat's breed!" << endl
         << "Press enter to countinue" << endl;
    cin.get();
    cout << "you can choose from ……" << endl;
    cin.get();
    cout << "AmericanShortHair\nBurmese\nEnglishShortHair\nRagdoll\nPersian\nBobtail" << endl;
    cin >> catBrd;
    cin.get();
    cout << "Now,how many cats do you prefer?" << endl;
    cin >> catNum;
    cin.get();
    if (catNum >= 10)
    {
        cout << "Alright, that's quite a lot!" << endl;
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
    cat xzCat(catAge, catNum, love, catWeight, catName, catBrd, masterName);
    int corresNum(0), exitNum(1);
    do
    {
        cout << "Now you can choose what you want to do with your cat !\n";
        cin.get();
        cout << "Choose the corresponding number ahead to countinue !\n"
             << "1. Raise cat" << endl
             << "2. Inter act with her" << endl
             << "3. Show your cats' home " << endl
             << "……" << endl;
        cin >> corresNum;
        cin.get();
        switch (corresNum)
        {
        case 1:
            xzCat.raiseCat(catNum, catBrd);

        case 2:
            xzCat.interact();

        case 3:
            xzCat.showHome();
        default:
            break;
        }

        cout << "Press number 0 to exit , press any other number to continue!\n";
        cin >> exitNum;
        cin.get();
    } while (exitNum != 0);

    cout << "Thanks for playing!\n See you next time!\n";
    cin.get();
    cin.get();
    return 0;
}