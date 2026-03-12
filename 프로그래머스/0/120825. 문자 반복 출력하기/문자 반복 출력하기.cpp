#include <string>

using namespace std;

string solution(string my_string, int n)
{
    string answer;
    answer.reserve(my_string.length() * n);

    for (const char c : my_string)
        answer.append(n, c);

    return answer;
}