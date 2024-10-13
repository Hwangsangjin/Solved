#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    const int Time = (A * 60) + B + C;
    const int Hour = (Time / 60) % 24;
    const int Minute = Time % 60;
    
    cout << Hour << " " << Minute;

    return 0;
}