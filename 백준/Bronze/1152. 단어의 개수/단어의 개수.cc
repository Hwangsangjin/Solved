#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string Input;
    getline(cin, Input);

    if (Input.empty())
    {
        cout << 0;
        return 0;
    }

    int WordCount = 1;
    for (int i = 0; i < Input.length(); ++i)
    {
        if (Input[i] == ' ')
        {
            WordCount++;
        }
    }

    if (Input[0] == ' ')
    {
        WordCount--;
    }

    if (Input[Input.length() - 1] == ' ')
    {
        WordCount--;
    }

    cout << WordCount;
    return 0;
}