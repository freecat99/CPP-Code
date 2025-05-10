#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    vector<vector<char>> mat(n + 1, vector<char>(n + 1));

    // Input
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }

    // Early exit if start or end is blocked
    if (mat[1][1] == '*' || mat[n][n] == '*') {
        cout << 0;
        return 0;
    }

    // Base cases
    for (int i = 1; i <= n; i++) {
        if (mat[1][i] != '*') dp[1][i] = 1;
        else break;
    }

    for (int i = 1; i <= n; i++) {
        if (mat[i][1] != '*') dp[i][1] = 1;
        else break;
    }

    // DP table
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (mat[i][j] != '*') {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[n][n];
    return 0;
}
