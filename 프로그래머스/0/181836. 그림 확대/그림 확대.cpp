#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k)
{
    vector<string> answer;
    
    for (const string& row : picture)
    {
        string scaled;
        
        for (char c : row)
            scaled += string(k, c);

        for (int i = 0; i < k; ++i)
            answer.push_back(scaled);
    }
    
    return answer;
}