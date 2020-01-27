
//  Created by 张小舟 on 2020/1/5.
//  Copyright © 2020年 张小舟. All rights reserved.
//  我也不知道我什么时候会把这个发出去，可能是晚上，可能不是。但我写它的时候是晚上，所以就假装是吧。写得极其简陋，毕竟就是个文字游戏（）
//  也不知道你会不会看源码x 最好不要看，我的C++有一半都已经还给老师了……。

#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    int totalSteps, totalTurn, UTurn;
    int currentStep = 0, currentTurn = 0;
    char response1, response3;
    int response2, answer;
    srand((int)time(NULL));
    totalSteps = rand() % (20 - 10 + 1) + 10;
    totalTurn = rand() % (6 - 3 + 1) + 3;
    UTurn = rand() % (10 - 5 + 1) + 5;
    answer = rand() % 3;

    cout << "Evening.\n"
         << "Welcome to this maze.\n"
         << "respond g if you wanna go ahead.\n"
         << "resopnd b if you wanna turn back.\n"
         << "respond l if you wanna turn left.\n"
         << "respond r if you wanna turn righ.\n"
         << "Please follow the instruction strictly.\n";

    do
    {
        cin >> response1;
        cin.get();
        currentStep++;

        if (currentStep == rand() % (8 - 4 + 1) + 4)
        {
            cout << "It's a T-junction." << endl
                 << "You can only turn left or right" << endl;
        }

        if ((response1 == 'l') || (response1 == 'r'))
        {
            currentTurn++;
            if (currentTurn > totalTurn)
            {
                cout << "You are not allowed to turn here" << endl;
            }
        }

        if ((currentStep != UTurn) && (currentStep != totalSteps))
        {
            cout << "Please continue" << endl;
        }
        else if ((currentStep == UTurn) && (currentStep != totalSteps))
        {
            cout << "It is a dead end" << endl;
            UTurn += rand() % (4 - 3 + 1) + 3;
        }

    } while (currentStep < totalSteps);

    cout << "\nCongratulations!\n"
         << "You've arrived at the destination." << endl;
    cin.get();
    cout << "Maybe I forgot to say that it was only stage one.\n"
         << "Here comes stage two." << endl;
    cin.get();
    cout << "There are three boxes marked 1~3.";
    cin.get();
    cout << "You have only one chance.\nNow enter your choice.";
    cin >> response2;
    cin.get();
    if (response2 == answer)
    {
        cout << "Opps,you got me.";
        cin.get();
        cout << "I have been keeping a secret for a quite period of time which depends on when will you recieve this.";
        cin.get();
        cout << "Honestly I'm a trustworthy secret keeper.";
        cin.get();
        cout << "But I want you to know all about this.";
        cin.get();
        cout << "Despite that I have no idea where will it lead us.";
        cin.get();
        cout << "Terrible consequences frighten me while those good ones seduce me.";
        cin.get();
        cout << "Yet I'm writing this……";
        cin.get();
        cout << "To be clear,I am not asking for an answer.";
        cin.get();
        cout << "I purely think you have the right and need to know this.";
        cin.get();
        cout << "By now I assume you have had a couple guesses.";
        cin.get();
        cout << "I'll leave the choice to you.\nBut don't fool me if you have no idea.";
        cin.get();
        cout << "Respond y and the code will do this for me.\n"
             << "Respond n if you'd like hear it in person." << endl;

        cin >> response3;
        if (response3 == 'y')
        {
            cout << "I _____ you.";
            cin.get();
            cout << "Like.Fancy.Adore.Relish.Am fond of.Am into.";
            cin.get();
            cout << "Choose any word or phrase you like.";
            cin.get();
            cout << "You have lightend my day for so many times.";
            cin.get();
            cout << "I have some sort of wonderful feeling while around you.";
            cin.get();
            cout << "Is it hormone?";
            cin.get();
            cout << "Or simple crush?";
            cin.get();
            cout << "But it didn't fade away.";
            cin.get();
            cout << "Even in this moment I can recall that feeling.";
            cin.get();
            cout << "It's echoing.";
            cin.get();
            cout << "To a degree that next time seeing you I might spit a couple of flowers.";
            cin.get();
            cout << "I'm running out of words so I'll pause here.";
            cin.get();
            cout << "It's your decision.";
            cin.get();
            cout << "Setp forward or stay still. I can cope with either of them.";
            cin.get();
            cout << "Now I'd like to call it a night.";
        }
        if (response3 == 'n')
        {
            cout << "come and get me." << endl;
        }
    }

    if (response2 != answer)
    {
        cout << "It's just odds.\n"
             << "Now you have two options.\n"
             << "Try again from the start or simply go through the code.\n"
             << "Small Tip: Don't choose the latter one."
             << "Anyway,game over." << endl;
    }

    return 0;
}
