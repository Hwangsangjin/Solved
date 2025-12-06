#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices)
{
    vector<bool> removed(my_string.length(), false);   
    for (int i : indices)
        removed[i] = true;
    
    string answer = "";
    answer.reserve(my_string.length());
    for (int i = 0; i < my_string.length(); ++i)
    {
        if (!removed[i])
            answer += my_string[i];
    }
    
    return answer;
}