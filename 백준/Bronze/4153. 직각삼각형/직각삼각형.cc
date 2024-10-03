#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    array<int, 3> Sides;

    while (true)
    {
        cin >> Sides[0] >> Sides[1] >> Sides[2];

        if (Sides[0] == 0 && Sides[1] == 0 && Sides[2] == 0)
        {
            break;
        }

        sort(Sides.begin(), Sides.end());

        if (Sides[0] * Sides[0] + Sides[1] * Sides[1] == Sides[2] * Sides[2])
        {
            cout << "right\n";
        }
        else
        {
            cout << "wrong\n";
        }
    }
    
    return 0;
}