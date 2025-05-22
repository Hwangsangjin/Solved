#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Count = 1;
    int Start = 1;
    int End = 1;
    int Sum = 1;
    int N;
    cin >> N;
    
    while (End != N)
    {
        if (Sum == N)
        {
            ++Count;
            ++End;
            Sum += End;
        }
        else if (Sum > N)
        {
            Sum -= Start;
            ++Start;
        }
        else
        {
            ++End;
            Sum += End;
        }
    }
    
    cout << Count;
    return 0;
}
