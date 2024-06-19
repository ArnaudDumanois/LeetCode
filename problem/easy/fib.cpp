//
// Created by arnau on 19/06/2024.
//
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// in dynamic programming, we can use a vector to store the values of the fibonacci sequence

int fib(int n) {
    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}