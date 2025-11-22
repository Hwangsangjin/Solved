#include <string>

using namespace std;

int solution(string number)
{
    int answer = 0;
    
    for (char c : number)
    {
        answer = (answer + (c - '0')) % 9;
    }
    
    return answer;
}