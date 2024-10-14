#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 3> Dice;
    for (int& i : Dice)
    {
        cin >> i;
    }

    if (Dice[0] == Dice[1] && Dice[1] == Dice[2])
    {
        cout << Dice[0] * 1000 + 10000;
    }
    else if (Dice[0] == Dice[1] || Dice[0] == Dice[2])
    {
        cout << Dice[0] * 100 + 1000;
    }
    else if (Dice[1] == Dice[2])
    {
        cout << Dice[1] * 100 + 1000;
    }
    else
    {
        cout << *max_element(Dice.begin(), Dice.end()) * 100;
    }

    return 0;
}