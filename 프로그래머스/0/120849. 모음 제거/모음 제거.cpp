#include <string>

using namespace std;

string solution(string my_string)
{
    string answer;
    answer.reserve(my_string.size());
    
    const string vowel = "aeiou";
    
    for (char c : my_string)
    {
        if (vowel.find(c) == string::npos)
            answer += c;
    }
    
    return answer;
}