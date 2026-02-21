#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> array)
{
    unordered_map<int, int> frequency;

    for (int value : array)
        ++frequency[value];

    int maxCount = 0;
    int answer = -1;
    bool duplicated = false;

    for (const auto& [number, count] : frequency)
    {
        if (count > maxCount)
        {
            maxCount = count;
            answer = number;
            duplicated = false;
        }
        else if (count == maxCount)
        {
            duplicated = true;
        }
    }

    return duplicated ? -1 : answer;
}