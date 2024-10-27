#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string Input;
    cin >> Input;
    cout << (equal(Input.begin(), Input.begin() + Input.size() / 2, Input.rbegin()) ? 1 : 0);

    return 0;
}