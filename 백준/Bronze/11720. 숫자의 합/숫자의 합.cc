#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string Input;
    cin >> N >> Input;

    int Sum = 0;

    for (int i = 0; i < N; ++i)
    {
        Sum += Input[i] - '0';
    }

    cout << Sum;

    return 0;
}