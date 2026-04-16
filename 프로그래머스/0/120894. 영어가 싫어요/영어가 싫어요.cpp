#include <string>

using namespace std;

long long solution(string numbers)
{
    string str[10] =
    {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    for (int i = 0; i < 10; ++i)
    {
        size_t pos = 0;
        while ((pos = numbers.find(str[i], pos)) != string::npos)
            numbers.replace(pos, str[i].length(), to_string(i));
    }
    
    return stoll(numbers);
}