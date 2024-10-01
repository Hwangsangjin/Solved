#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestCase;
    cin >> TestCase;

    while (TestCase--)
    {
        int Score = 0;
        int Count = 0;

        string Input;
        cin >> Input;

        for (const char& ch : Input)
        {
            if (ch == 'O')
            {
                Score += ++Count;
            }
            else
            {
                Count = 0;
            }
        }

        cout << Score << "\n";
    }

    return 0;
}