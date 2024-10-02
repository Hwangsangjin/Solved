#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string Input;
    cin >> Input;

    for (char ch = 'a'; ch <= 'z'; ++ch)
    {
        cout << static_cast<int>(Input.find(ch)) << " ";
    }
    
    return 0;
}