#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2)
{
    return {numbers.begin() + num1, numbers.begin() + num2 + 1};
}