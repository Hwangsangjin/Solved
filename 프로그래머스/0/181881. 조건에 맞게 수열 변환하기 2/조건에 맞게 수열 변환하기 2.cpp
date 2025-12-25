#include <vector>

using namespace std;

int solution(vector<int> arr)
{
    int answer = 0;
    
    while (true)
    {
        vector<int> next = arr;
        
        for (int& value : next)
        {
            if (value >= 50 && value % 2 == 0)
                value /= 2;
            else if (value < 50 && value % 2 == 1)
                value = value * 2 + 1;
        }
        
        if (next == arr)
            return answer;
        
        arr = next;
        ++answer;
    }
}