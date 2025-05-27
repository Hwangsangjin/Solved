#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    queue<int> Queue;
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; ++i)
        Queue.push(i);
        
    while (Queue.size() > 1)
    {
        Queue.pop();
        Queue.push(Queue.front());
        Queue.pop();
    }
    
    cout << Queue.front();
    return 0;
}
