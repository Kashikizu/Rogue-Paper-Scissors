/*
 * @author Kashikizu/ARDhruvo
 * File Creation Date: 12/09/2024 (dd/mm/yyyy)
 * Initial Date: //2024
 */

#include <bits/stdc++.h>
using namespace std;

string play[3] = {"Rock", "Papers", "Scissors"};
int p, bot;

#define paragraph cout << endl

string stringz(int code)
{
    switch (code)
    {
    case 0:
        cout << play[p-1] << " beat " << play[bot-1];
        paragraph;
        cout << "You won!" << endl;
        paragraph;
        break;
    case 1:
        cout << play[bot-1] << " beat " << play[p-1];
        paragraph;
        cout << "You lost!" << endl;
        paragraph;
        break;
    case 2:
        cout << play[bot-1] << " and " << play[p-1] << " are the same";
        paragraph;
        cout << "Its a draw!" << endl;
        paragraph;
        break;
    }
}

void game()
{
    bot = rand() % 3;
    cout << "Bot plays " << play[bot] << endl;
    bot++;
    paragraph;
    if (p == 3 && bot == 1)
    {
        stringz(1);
    }
    else if (p > bot)
    {
        stringz(0);
    }
    else if (p ==  bot)
    {
        stringz(2);
    }
    else
    {
        stringz(1);
    }
}

void pick()
{
    if (p > 3 || p < 1)
    {
        while (p > 3 || p < 1)
        {
            cout << "Invalid Option. Select again" << endl;
            cout << "Enter your choice:" << endl
                 << "1. Rock\n2. Paper\n3.Scissors" << endl;
            paragraph;
            cin >> p;
            paragraph;
        }
        cout << "You picked " << play[p - 1] << endl;
        game();
        paragraph;
    }
    else
    {
        cout << "You picked " << play[p - 1] << endl;
        game();
        paragraph;
    }
}

int main()
{
    int wave = 1;
    srand(time(0));
    while (wave < 3)
    {
        cout << "Enter your choice:" << endl
             << "1. Rock\n2.Paper\n3.Scissors" << endl;
        cin >> p;
        paragraph;
        pick();
        wave++;
    }
}
