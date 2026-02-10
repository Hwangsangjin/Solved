#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k)
{
    if (k % 2 == 1)
    {
        for (int& e : arr)
            e *= k;
    }
    else
    {
        for (int& e : arr)
            e += k;
    }
    
    return arr;
}