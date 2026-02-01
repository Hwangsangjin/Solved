#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list)
{
    vector<int> answer;
    
    for (const int& e : arr)
    {
        if (find(delete_list.begin(), delete_list.end(), e) == delete_list.end())
            answer.push_back(e);
    }
    
    return answer;
}