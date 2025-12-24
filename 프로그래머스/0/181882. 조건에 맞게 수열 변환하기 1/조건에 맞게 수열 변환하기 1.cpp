#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    for (int& x : arr)
    {
        if (x >= 50 && x % 2 == 0)
            x /= 2;
        else if (x < 50 && x % 2 == 1)
            x *= 2;
    }
    
    return arr;
}