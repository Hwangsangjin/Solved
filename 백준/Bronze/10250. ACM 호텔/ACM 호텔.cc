#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T, H, W, N;
    cin >> T;

    while (T--)
    {
        cin >> H >> W >> N;

        int Floor = N % H == 0 ? H : N % H;
        int Room = N % H == 0 ? N / H : N / H + 1;

        cout << Floor * 100 + Room << "\n";
    }

    return 0;
}