#include <cctype>
#include <string>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    int temp = 0;

    for (char c : my_string)
    {
        if (isdigit(c))
        {
            temp = temp * 10 + (c - '0');
        }
        else
        {
            answer += temp;
            temp = 0;
        }
    }

    answer += temp;
    return answer;
}