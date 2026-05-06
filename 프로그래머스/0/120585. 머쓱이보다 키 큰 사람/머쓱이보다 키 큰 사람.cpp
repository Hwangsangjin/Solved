#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array, int height)
{
    return count_if(array.begin(), array.end(), [height](int n) { return n > height; });
}