#include <string>

using namespace std;

int solution(int num, int k)
{
    string number = to_string(num);
    int pos = number.find(k + '0');
    
    return pos == string::npos ? -1 : pos + 1;
}