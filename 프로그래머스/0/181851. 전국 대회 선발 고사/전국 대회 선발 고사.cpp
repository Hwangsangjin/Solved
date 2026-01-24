#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance)
{
    vector<pair<int, int>> attended;
    
    for (int i = 0; i < rank.size(); ++i)
    {
        if (attendance[i])
            attended.push_back({rank[i], i});
    }
    
    sort(attended.begin(), attended.end());
    
    int a = attended[0].second;
    int b = attended[1].second;
    int c = attended[2].second;
    
    return 10000 * a + 100 * b + c;
}