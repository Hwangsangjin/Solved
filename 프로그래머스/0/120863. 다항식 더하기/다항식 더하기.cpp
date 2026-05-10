#include <sstream>
#include <string>

using namespace std;

string solution(string polynomial)
{
    stringstream ss(polynomial);
    string term;
    
    int xSum = 0;
    int numSum = 0;
    
    while (ss >> term)
    {
        if (term == "+")
            continue;
        
        if (term.back() == 'x')
            xSum += term.size() == 1 ? 1 : stoi(term.substr(0, term.size() - 1));
        else
            numSum += stoi(term);
    }
    
    string answer;
    
    if (xSum > 0)
        answer = xSum == 1 ? "x" : to_string(xSum) + "x";
    
    if (numSum > 0)
    {
        if (!answer.empty())
            answer += " + ";
        
        answer += to_string(numSum);
    }
    
    return answer;
}