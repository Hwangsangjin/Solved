#include <string>

using namespace std;

string solution(string my_string)
{
    return {my_string.rbegin(), my_string.rend()};
}