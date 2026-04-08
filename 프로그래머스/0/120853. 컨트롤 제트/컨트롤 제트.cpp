#include <string>
#include <sstream>

using namespace std;

int solution(string s)
{
    int answer = 0;
    int last = 0;
    stringstream ss(s);
    string token;
    
    while (ss >> token)
        token == "Z" ? answer -= last : answer += (last = stoi(token));
    
    return answer;
}