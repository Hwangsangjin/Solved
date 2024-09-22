#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> Numbers;
    Numbers.resize(9);

    for (int i = 0; i < Numbers.size(); ++i)
    {
        cin >> Numbers[i];
    }

    vector<int>::iterator Iter = max_element(Numbers.begin(), Numbers.end());
    cout << *Iter << "\n" << distance(Numbers.begin(), Iter) + 1;

    return 0;
}