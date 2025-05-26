#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> A(N, 0);
    
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    
    vector<char> Result;
    stack<int> Stack;
    int Count = 1;
    bool bFlag= true;
    
    for (int i = 0; i < A.size(); ++i)
    {
        int Num = A[i];
             
        if (Num >= Count)
        {
            while (Num >= Count)
            {
                Stack.push(Count++);
                Result.push_back('+');
            }
            
            Stack.pop();
            Result.push_back('-');
        }
        else
        {
            int Top = Stack.top();
            Stack.pop();
            
            if (Top > Num)
            {
                cout << "NO";
                bFlag = false;
                break;
            }
            else
                Result.push_back('-');
        }
    }
    
    if (bFlag)
    {
        for (int i = 0; i < Result.size(); ++i)
            cout << Result[i] << "\n";
    }
    
    return 0;
}
