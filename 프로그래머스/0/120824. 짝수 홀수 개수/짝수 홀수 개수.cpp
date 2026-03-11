#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list)
{
    int even = 0, odd = 0;
    
    for (const int num : num_list)
        num % 2 == 0 ? ++even : ++odd;
    
    return {even, odd};
}