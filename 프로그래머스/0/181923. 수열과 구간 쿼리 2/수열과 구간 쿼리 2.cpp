#include <algorithm>
#include <climits>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries)
{
    vector<int> answer;
    answer.reserve(queries.size());
    
    for (const auto& query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];
        
        int min = INT_MAX;
        
        for_each(arr.begin() + s, arr.begin() + e + 1, [&](int value)
        {
            if (value > k && value < min)
            {
                min = value;
            }
        });
        
        answer.push_back(min == INT_MAX ? -1 : min);
    }
    
    return answer;
}