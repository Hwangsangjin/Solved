#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    vector<int> answer;
    
    for (int e : arr)
    {
        if (find(answer.begin(), answer.end(), e) == answer.end())
        {
            answer.push_back(e);
            
            if (answer.size() == k)
                break;
        }
    }
    
    while (answer.size() < k)
        answer.push_back(-1);
    
    return answer;
}