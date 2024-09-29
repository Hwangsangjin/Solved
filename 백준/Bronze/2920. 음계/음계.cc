#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string CMajor(8, ' ');

    for (int i = 0; i < 8; ++i)
    {
        cin >> CMajor[i];
    }

    if (CMajor == "12345678")
    {
        cout << "ascending";
    }
    else if (CMajor == "87654321")
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }

    return 0;
}