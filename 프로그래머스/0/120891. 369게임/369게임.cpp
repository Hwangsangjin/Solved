int solution(int order)
{
    int answer = 0;
    
    while (order)
    {
        int digit = order % 10;
        answer += (digit == 3 || digit == 6 || digit == 9);
        order /= 10;
    }
    
    return answer;
}