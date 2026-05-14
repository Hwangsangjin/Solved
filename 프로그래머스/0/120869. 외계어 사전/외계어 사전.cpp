#include <array>
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic)
{
    array<int, 26> target = {0};
    
    for (int i = 0; i < spell.size(); ++i)
        ++target[spell[i][0] - 'a'];
    
    for (int i = 0; i < dic.size(); ++i)
    {
        if (dic[i].size() != spell.size())
            continue;
        
        array<int, 26> count = {0};

        for (char c : dic[i])
            ++count[c - 'a'];

        if (count == target)
            return 1;
    }
    
    return 2;
}