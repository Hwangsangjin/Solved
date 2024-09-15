#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string Input;
    cin >> Input;

    for (int i = 0; i < Input.length(); ++i)
    {
        if (Input[i] >= 'A' && Input[i] <= 'Z')
        {
            Input[i] = tolower(Input[i]);
        }
        else if (Input[i] >= 'a' && Input[i] <= 'z')
        {
            Input[i] = toupper(Input[i]);
        }
    }

    cout << Input;

    return 0;
}