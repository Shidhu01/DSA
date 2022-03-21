#include <bits/stdc++.h>

using namespace std;

long long gridTraveller(long long row, long long col, long long dp[100][100])
{
    if (row == 1 and col == 1)
    {
        dp[row][col] = 1;
    }
    if (row == 0 or col == 0)
        return 0;

    if (dp[row][col] != 0)
        return dp[row][col];
    dp[row][col] = gridTraveller(row - 1, col, dp) + gridTraveller(row, col - 1, dp);

    return dp[row][col];
}

int main()
{

    long long m, n;
    long long DP[100][100];
    for (long long i = 0; i <= m; i++)
        for (long long j = 0; j <= n + 1; j++)
            DP[i][j] = 0;
    cin >> m >> n;

    cout << gridTraveller(m, n, DP);
}