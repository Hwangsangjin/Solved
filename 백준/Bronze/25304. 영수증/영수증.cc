#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, N;
    cin >> X >> N;

    int Sum = 0;

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        Sum += a * b;
    }

    if (Sum == X)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}