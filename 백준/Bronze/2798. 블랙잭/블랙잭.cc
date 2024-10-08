#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<int> Cards(N);
    for (int i = 0; i < N; i++)
    {
        cin >> Cards[i];
    }

    sort(Cards.begin(), Cards.end());

    int MaxSum = 0;

    for (int i = 0; i < N - 2; i++)
    {
        int Left = i + 1;
        int Right = N - 1;

        while (Left < Right)
        {
            int Temp = Cards[i] + Cards[Left] + Cards[Right];
            if (Temp <= M)
            {
                MaxSum = max(MaxSum, Temp);
                Left++;
            }
            else
            {
                Right--;
            }
        }

        if (MaxSum == M)
        {
            break;
        }
    }

    cout << MaxSum;
    return 0;
}