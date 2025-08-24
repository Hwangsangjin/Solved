#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S;
    
    while (cin >> S)
    {
        if (S == "0")
            break;
            
        string Temp = S;
        reverse(Temp.begin(), Temp.end());
        
        cout << (Temp == S ? "yes\n" : "no\n");
    }
    
    return 0;
}
