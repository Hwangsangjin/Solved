#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    array<int, 6> TShirt;
    for (int i = 0; i < 6; i++)
    {
        cin >> TShirt[i];
    }

    int T, P;
    cin >> T >> P;

    int Count = 0;
    for (int i = 0; i < 6; i++)
    {
        Count += (TShirt[i] + T - 1) / T;
    }

    cout << Count << "\n";
    cout << N / P << " " << N % P;
    
    return 0;
}