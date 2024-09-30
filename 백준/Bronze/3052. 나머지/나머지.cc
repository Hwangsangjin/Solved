#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<bool, 42> Remainders{};
    for (int i = 0; i < 10; ++i)
    {
        int Input;
        cin >> Input;
        Remainders[Input % 42] = true;;
    }

    int Count = 0;
    for (const auto& i : Remainders)
    {
        Count += i;
    }

    cout << Count;

    return 0;
}