#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    int A[10001] = {};
    
    for (int i = 0; i < N; ++i)
    {
        int X;
        cin >> X;
        ++A[X];
    }
    
    for (int i = 1; i < 10001; ++i)
    {
        while (A[i]--)
        {
            cout << i << "\n";
        }
    }
    
    return 0;
}
