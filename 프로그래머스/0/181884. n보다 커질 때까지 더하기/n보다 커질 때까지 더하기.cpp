#include <vector>

using namespace std;

int solution(vector<int> numbers, int n)
{
    int answer = 0;
    
    for (const int x : numbers)
    {
        answer += x;
        if (answer > n)
            break;
    }
    
    return answer;
}