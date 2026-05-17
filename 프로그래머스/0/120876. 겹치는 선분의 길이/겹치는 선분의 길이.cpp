#include <array>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines)
{
    array<int, 201> board{};
    
    for (const vector<int>& line : lines)
    {
        int start = line[0] + 100;
        int end = line[1] + 100;
        
        for (int i = start; i < end; ++i)
            ++board[i];
    }
    
    int answer = 0;
    
    for (int i = 0; i < 201; ++i)
    {
        if (board[i] >= 2)
            ++answer;
    }
    
    return answer;
}