#include <string>

using namespace std;

string solution(string n_str)
{
    int idx = 0;
    while (idx < n_str.size() && n_str[idx] == '0')
        ++idx;
    
    return n_str.substr(idx);
}