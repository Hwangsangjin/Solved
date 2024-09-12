#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    int** A = new int*[N];
    int** B = new int*[N];

    for (int i = 0; i < N; ++i)
    {
        A[i] = new int[M];
        B[i] = new int[M];
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << A[i][j] + B[i][j] << " ";
        }

        cout << "\n";
    }

    for (int i = 0; i < N; ++i)
    {
        delete[] A[i];
        A[i] = nullptr;

        delete[] B[i];
        B[i] = nullptr;
    }

    delete[] A;
    A = nullptr;

    delete[] B;
    B = nullptr;

    return 0;
}