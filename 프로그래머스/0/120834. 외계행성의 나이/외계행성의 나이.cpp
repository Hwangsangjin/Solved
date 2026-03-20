#include <string>

using namespace std;

string solution(int age)
{
    string answer = to_string(age);
    
    for (char& c : answer)
        c = 'a' + (c - '0');
    
    return answer;
}