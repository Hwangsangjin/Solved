#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r)
{
    vector<int> answer;
    
    for (int i = l; i <= r; ++i)
    {
        int n = i;
        while (n)
        {
            int d = n % 10;
            if (d != 0 && d != 5)
            {
                break;
            }
            
            n /= 10;
        }

        if (n == 0)
        {
            answer.push_back(i);
        }
    }
    
    if (answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}