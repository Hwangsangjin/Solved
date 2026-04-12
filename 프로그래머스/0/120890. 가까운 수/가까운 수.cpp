#include <cmath>
#include <vector>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer = array[0];
    
    for (int e : array)
    {
        if (abs(e - n) < abs(answer - n))
            answer = e;
        else if (abs(e - n) == abs(answer - n) && e < answer)
            answer = e;
    }
    
    return answer;
}