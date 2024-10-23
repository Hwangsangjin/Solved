#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> Scores(N);

    for (int i = 0; i < N; i++)
    {
        cin >> Scores[i];
    }

    int M = *max_element(Scores.begin(), Scores.end());
    double Avg = 0.0;

    for (int i = 0; i < N; i++)
    {
        Avg += static_cast<double>(Scores[i]) / M * 100;
    }

    cout << fixed << setprecision(2) << Avg / N;
    return 0;
}