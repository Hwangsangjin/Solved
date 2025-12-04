#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> upper(26, 0);
    vector<int> lower(26, 0);

    for (char c : my_string)
    {
        if (isupper(c))
            ++upper[c - 'A'];
        else if (islower(c))
            ++lower[c - 'a'];
    }

    upper.insert(upper.end(), lower.begin(), lower.end());
    return upper;
}