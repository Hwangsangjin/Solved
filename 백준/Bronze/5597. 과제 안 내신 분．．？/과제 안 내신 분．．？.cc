#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool Array[31]{};
    int Input;

    for (int i = 0; i < 28; ++i)
    {
        cin >> Input;
        Array[Input] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (!Array[i])
        {
            cout << i << "\n";
        }
    }

    return 0;
}