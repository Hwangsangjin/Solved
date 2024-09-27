#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    string Result = to_string(A * B * C);
    array<int, 10> Array{};

    for (char ch : Result)
    {
        Array[ch - '0'] += 1;
    }

    for (const auto& i : Array)
    {
        cout << i << "\n";
    }
    
    return 0;
}