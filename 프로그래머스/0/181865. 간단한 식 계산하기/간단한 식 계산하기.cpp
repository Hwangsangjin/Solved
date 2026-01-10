#include <string>

using namespace std;

int solution(string binomial)
{
    int idx = binomial.find(" ");
    char op = binomial[idx + 1];
    int a = stoi(binomial.substr(0, idx));
    int b = stoi(binomial.substr(idx + 3));
    
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else
        return a * b;
}