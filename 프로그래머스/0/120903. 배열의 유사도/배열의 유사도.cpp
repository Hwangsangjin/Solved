#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2)
{
    int answer = 0;
    unordered_set<string> lookup(s2.begin(), s2.end());
    
    for (const string& s : s1)
    {
        if (lookup.count(s))
            ++answer;
    }
    
    return answer;
}