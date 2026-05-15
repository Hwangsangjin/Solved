int solution(int n)
{
    int answer = 0;
    int count = 0;

    while (count < n)
    {
        ++answer;

        if (answer % 3 == 0)
            continue;

        int temp = answer;
        while (temp > 0)
        {
            if (temp % 10 == 3)
                break;
            
            temp /= 10;
        }

        if (temp > 0)
            continue;

        ++count;
    }

    return answer;
}