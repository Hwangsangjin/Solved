#include <string>

using namespace std;

string solution(string rsp)
{
    for (char& e : rsp)
    {
        if (e == '2')
            e = '0';
        else if (e == '0')
            e = '5';
        else
            e = '2';
    }
    
    return rsp;
}