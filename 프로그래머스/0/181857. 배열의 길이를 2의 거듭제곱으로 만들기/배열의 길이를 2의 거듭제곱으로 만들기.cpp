#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    int n = arr.size();
    
    int target = 1;
    while (target < n)
        target *= 2;
    
    for (int i = 0; i < target - n; ++i)
        arr.push_back(0);
    
    return arr;
}