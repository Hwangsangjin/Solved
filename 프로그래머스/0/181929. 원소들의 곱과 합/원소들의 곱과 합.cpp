#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
    int mul = 1;
    int sum = 0;
    
    for (const int& i : num_list)
    {
        mul *= i;
        sum += i;
    }
    
    if (mul < sum * sum)
    {
        answer = 1;
    }
    
    return answer;
}