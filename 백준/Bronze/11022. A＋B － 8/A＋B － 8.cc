#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestCase, A, B;
    cin >> TestCase;
    
    for (int i = 1; i <= TestCase; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n";
    }

    return 0;
}