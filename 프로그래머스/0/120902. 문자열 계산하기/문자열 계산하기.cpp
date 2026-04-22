#include <string>
#include <sstream>

using namespace std;

int solution(string my_string)
{
    int answer = 0;
    stringstream ss(my_string);
    ss >> answer;
    
    while (!ss.eof())
    {
        char op;
        int num;
        
        ss >> op >> num;
        
        if (op == '+')
            answer += num;
        else
            answer -= num;
    }
    
    return answer;
}