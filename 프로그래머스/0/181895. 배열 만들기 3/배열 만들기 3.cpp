#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;
    
    for (const auto& interval : intervals)
    {
        int a = interval[0];
        int b = interval[1];
        
        answer.insert(answer.end(), arr.begin() + a, arr.begin() + b + 1);
    }
    
    return answer;
}