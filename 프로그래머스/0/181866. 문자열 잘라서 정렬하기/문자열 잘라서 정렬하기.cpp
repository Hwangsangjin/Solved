#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myString)
{
    vector<string> answer;
    string word = "";
    
    for (char& c : myString)
    {
        if (c == 'x')
        {
            if (!word.empty())
            {
                answer.push_back(word);
                word.clear();
            }
        }
        else
        {
            word += c;
        }
    }
    
    if (!word.empty())
        answer.push_back(word);
    
    sort(answer.begin(), answer.end());
    return answer;
}