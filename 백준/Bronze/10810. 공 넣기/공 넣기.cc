#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> Basket(N, 0);

    while (M--)
    {
        int i, j, k;
        cin >> i >> j >> k;

        fill(Basket.begin() + (i - 1), Basket.begin() + j, k);
    }

    for (const int& Ball : Basket)
    {
        cout << Ball << " ";
    }

    return 0;
}