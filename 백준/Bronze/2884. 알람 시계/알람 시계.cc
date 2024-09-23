#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int H, M;
    cin >> H >> M;

    int Time = H * 60 + M - 45;
    if (Time < 0)
    {
        Time += 60 * 24;
    }

    cout << Time / 60 << " " << Time % 60;

    return 0;
}