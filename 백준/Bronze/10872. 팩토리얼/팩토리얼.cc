#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Sum = 1;
    cin >> N;

    for (auto i = N; i > 0; --i)
    {
        Sum *= i;
    }

    cout << Sum;

    return 0;
}