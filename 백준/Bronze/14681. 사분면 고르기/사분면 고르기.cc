#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    cin >> X >> Y;
    cout << (X > 0 ? (Y > 0 ? 1 : 4) : (Y > 0 ? 2 : 3));
    
    return 0;
}