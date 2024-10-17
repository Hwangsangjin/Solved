#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string Name;

    for (int i = 0; i < N / 4; i++)
    {
        Name += "long ";
    }

    cout << Name + "int";
    return 0;
}