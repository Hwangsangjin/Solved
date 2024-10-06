#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    const int Max = max(1, N - 9 * static_cast<int>(to_string(N).size()));

    for (int i = Max; i < N; i++)
    {
        int Temp = i;
        int Sum = i;

        while (Temp != 0)
        {
            Sum += Temp % 10;
            Temp /= 10;
        }

        if (Sum == N)
        {
            cout << i;
            return 0;
        }
    }
    
    cout << 0;
    return 0;
}