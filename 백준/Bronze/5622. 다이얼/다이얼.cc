#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 26> Dials
    {
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9,
        10, 10, 10, 10
    };

    string Input;
    cin >> Input;

    int Time = 0;
    
    for (char ch : Input)
    {
        Time += Dials[ch - 'A'];
    }

    cout << Time;
    return 0;
}