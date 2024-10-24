#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;
    
    swap(A.front(), A.back());
    swap(B.front(), B.back());

    cout << max(A, B);
    return 0;
}