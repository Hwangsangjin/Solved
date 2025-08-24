#include <iostream>
#include <string>

using namespace std;

int main() 
{    
    int L;
    string S;
    cin >> L >> S;
    
    const int M = 1234567891;
    const int BASE = 31;
    long long HashValue = 0;
    long long Pow = 1;
    
    for (int i = 0; i < L; ++i)
    {
        int CharValue = S[i] - 'a' + 1;
        
        HashValue = (HashValue + CharValue * Pow) % M;
        
        Pow = (Pow * BASE) % M;
    }
    
    cout << HashValue;
    return 0;
}
