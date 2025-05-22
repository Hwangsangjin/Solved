#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<int> V(N, 0);
    
    for (int i = 0; i < N; ++i)
        cin >> V[i];
    
    sort(V.begin(), V.end());
    
    int Count = 0;
    int Start = 0;
    int End = N - 1;
    
    while (Start < End)
    {
        if (V[Start] + V[End] < M)
            ++Start;
        else if (V[Start] + V[End] > M)
            --End;
        else
        {
            ++Count;
            ++Start;
            --End;
        }
    }
    
    cout << Count;
    return 0;
}
