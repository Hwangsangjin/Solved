#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> Basket(N);
    iota(Basket.begin(), Basket.end(), 1);

    while (M--)
    {
        int i, j;
        cin >> i >> j;

        swap(Basket[i - 1], Basket[j - 1]);
    }

    for (const int& Ball : Basket)
    {
        cout << Ball << " ";
    }

    return 0;
}