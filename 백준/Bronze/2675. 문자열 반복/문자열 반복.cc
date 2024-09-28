#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestCase, RepeatCount;
    string Input, Result;
    cin >> TestCase;

    while (TestCase--)
    {
        cin >> RepeatCount >> Input;

        Result.clear();
        Result.reserve(Input.length() * RepeatCount);

        for (char ch : Input)
        {
            Result += string(RepeatCount, ch);
        }

        cout << Result << "\n";
    }
    
    return 0;
}