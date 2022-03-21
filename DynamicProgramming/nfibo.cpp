#include <bits/stdc++.h>

using namespace std;

// fibonacco recursive

long long fibonacci(long long n)
{
    if (n <= 2)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// fibonacci series uisng memoisation

long long fibonacciDP(long long n, long long dp[]) // long long used just to hold numbers greater than 32000
{
    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    if (n == 3)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fibonacciDP(n - 1, dp) + fibonacciDP(n - 2, dp);

    return dp[n];
}

int main()
{
    long long n;
    cin >> n;

    // this dp array is used to store all the calculated values of nth fibonacci term like for
    // finding 6th term we need 4th and 5th term and for 5th we need 4th and 3rd. Here 4th already
    // found so no need to check again that's why when once 4th term is found put it in the DP array
    // at 4th index which can be later accessed by 5th term.

    long long DP[n + 1];
    for (long long i = 0; i < n + 1; i++)
    {
        DP[i] = -1;
    }
    cout << fibonacciDP(n, DP);

    return 0;
}