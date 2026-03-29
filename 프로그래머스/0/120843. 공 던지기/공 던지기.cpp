#include <vector>

using namespace std;

int solution(vector<int> numbers, int k)
{
    int index = (k - 1) * 2 % numbers.size();
    return numbers[index];
}