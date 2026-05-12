#include <vector>

using namespace std;

int solution(vector<vector<int>> board)
{
    int dx[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
    int dy[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
    
    const int n = board.size();
    vector<vector<bool>> danger(n, vector<bool>(n, false));
    
    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            if (board[y][x] == 1)
            {
                for (int i = 0; i < 9; ++i)
                {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                        danger[ny][nx] = true;
                }
            }
        }
    }
    
    int answer = 0;

    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            if (!danger[y][x])
                ++answer;
        }
    }

    return answer;
}