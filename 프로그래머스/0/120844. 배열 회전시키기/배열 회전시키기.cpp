#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;
    
    if (direction == "right")
        rotate(numbers.rbegin(), numbers.rbegin() + 1, numbers.rend());
    else
        rotate(numbers.begin(), numbers.begin() + 1, numbers.end());
    
    return numbers;
}