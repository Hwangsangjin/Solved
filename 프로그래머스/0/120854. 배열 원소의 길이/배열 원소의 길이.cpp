#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist)
{
    vector<int> answer;
    answer.reserve(strlist.size());
    
    for (const string& str : strlist)
        answer.push_back(str.length());
    
    return answer;
}