#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    if (N == 1)
    {
        cout << 1;
        return 0;
    }

    int Count = 1;
    int Layer = 1;

    while (N > Count)
    {
        Count += 6 * Layer;
        Layer++;
    }

    cout << Layer;
    return 0;
}