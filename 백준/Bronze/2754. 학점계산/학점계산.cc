#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string Input;
    cin >> Input;

    double Rating = 0;
    cout << fixed;
    cout.precision(1);

    switch (Input[0])
    {
    case 'A':
        Rating += 4.0;
        break;
    case 'B':
        Rating += 3.0;
        break;
    case 'C':
        Rating += 2.0;
        break;
    case 'D':
        Rating += 1.0;
        break;
    }

    switch (Input[1])
    {
    case '+':
        Rating += 0.3;
        break;
    case '-':
        Rating -= 0.3;
        break;
    }

    cout << Rating;

    return 0;
}