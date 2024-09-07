#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int Year;
    cin >> Year;
    
    if (Year % 4 == 0)
    {
        if (Year % 400 == 0)
        {
            cout << 1;
        }
        else if (Year % 100 != 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    else
    {
        cout << 0;
    }

    return 0;
}