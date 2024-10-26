#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    constexpr array<int, 6> Pieces{1, 1, 2, 2, 2, 8};

    for (const int& Piece : Pieces)
    {
        int Input;
        cin >> Input;
        cout << Piece - Input << " ";
    }

    return 0;
}