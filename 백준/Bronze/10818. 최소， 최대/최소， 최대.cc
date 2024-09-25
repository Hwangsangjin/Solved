#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> Vector;
    Vector.resize(N);

    for (int i = 0; i < Vector.size(); ++i)
    {
        cin >> Vector[i];
    }

    auto MinMax = minmax_element(Vector.begin(), Vector.end());
    cout << *MinMax.first << " " << *MinMax.second;

    return 0;
}