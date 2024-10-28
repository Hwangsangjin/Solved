#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string Input;
    cin >> Input;

    array<int, 26> Alphabet{};

    for (int i = 0; i < Input.length(); i++)
    {
        Input[i] = toupper(Input[i]);
        Alphabet[Input[i] - 'A']++;
    }

    int Max = 0;
    int Index = -1;
    int Count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (Alphabet[i] > Max)
        {
            Max = Alphabet[i];
            Index = i;
            Count = 1;
        }
        else if (Alphabet[i] == Max)
        {
            Count++;
        }
    }

    cout << (Count > 1 ? '?' : static_cast<char>(Index + 'A'));
    return 0;
}