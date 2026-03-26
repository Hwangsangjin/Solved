int solution(int balls, int share)
{
    long long int answer = 1;
    
    if (share > balls - share)
        share = balls - share;
    
    for (int i = 0; i < share; ++i)
    {
        answer *= (balls - i);
        answer /= (i + 1);
    }
    
    return answer;
}