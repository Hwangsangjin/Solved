#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    
    for (int& a : A)
        cin >> a;
    
    int Count = 0;
    
    for (int i = N - 1; i > 0; --i)
    {
        int Max = 0;
        
        for (int j = 0; j <= i; ++j)
        {
            if (A[Max] < A[j])
                Max = j;
        }
        
        if (Max != i)
        {
            swap(A[Max], A[i]);
            ++Count;
        }
        
        if (Count == K)
        {
            for (int a : A)
                cout << a << " ";
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}
