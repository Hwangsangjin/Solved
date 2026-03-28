#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n)
{
    vector<vector<int>> answer;
    
    for (int i = 0; i < num_list.size(); i += n)
        answer.emplace_back(num_list.begin() + i, num_list.begin() + i + n);
    
    return answer;
}