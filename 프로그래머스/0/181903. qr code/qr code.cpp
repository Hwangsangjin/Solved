#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code)
{
    string answer = "";
    answer.reserve(code.size() / q + 1);
    
    for (int i = r; i < code.length(); i += q)
    {
        answer += code[i];
    }
    
    return answer;
}