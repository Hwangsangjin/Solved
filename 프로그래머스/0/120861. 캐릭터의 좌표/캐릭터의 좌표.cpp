#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer(2, 0);
    
    int maxX = board[0] / 2;
    int maxY = board[1] / 2;
    
    for (const string& key : keyinput)
    {
        int dx = 0, dy = 0;

        if (key == "up")
            dy = 1;
        else if (key == "down")
            dy = -1;
        else if (key == "left")
            dx = -1;
        else if (key == "right")
            dx = 1;
        
        int nx = answer[0] + dx;
        int ny = answer[1] + dy;
        
        if (-maxX <= nx && nx <= maxX &&
            -maxY <= ny && ny <= maxY)
        {
            answer[0] = nx;
            answer[1] = ny;
        }
    }
    
    return answer;
}