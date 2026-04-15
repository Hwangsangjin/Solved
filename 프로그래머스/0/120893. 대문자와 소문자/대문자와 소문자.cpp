#include <cctype>
#include <string>

using namespace std;

string solution(string my_string)
{
    for (char& c : my_string)
        c = isupper(c) ? tolower(c) : toupper(c);
    
    return my_string;
}