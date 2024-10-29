#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        cout << string(N - i, ' ') << string(2 * i - 1, '*') << '\n';
    }
    
    for (int i = 1; i < N; i++)
    {
        cout << string(i, ' ') << string(2 * (N - i) - 1, '*') << '\n';
    }

    return 0;
}