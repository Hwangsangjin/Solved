#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Count = 0;

    int N;
    cin >> N;

    while (N--)
    {
        int Input;
        cin >> Input;

        if (Input == 1)
        {
            continue;
        }

        bool bPrime = true;

        for (int i = 2; i * i <= Input; i++)
        {
            if (Input % i == 0)
            {
                bPrime = false;
                break;
            }
        }

        if (bPrime)
        {
            Count++;
        }
    }
   
    cout << Count;

    return 0;
}