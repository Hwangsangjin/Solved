#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    int n = num_list.size();
    int last = num_list[n - 1];
    int second_last = num_list[n - 2];

    num_list.push_back(last > second_last ? last - second_last : last * 2);
    return num_list;
}