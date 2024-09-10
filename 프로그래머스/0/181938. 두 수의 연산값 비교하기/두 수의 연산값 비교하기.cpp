#include <string>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;
    
    string ab = to_string(a) + to_string(b);
    int ab2 = 2 * a * b;
    
    answer = ((stoi(ab) >= ab2) ? stoi(ab) : ab2);
    
    return answer;
}