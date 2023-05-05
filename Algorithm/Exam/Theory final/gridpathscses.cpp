//MEMORIZATION METHOD:
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int MAXN = 1e3 + 5;

int n;
char grid[MAXN][MAXN];
int dp[MAXN][MAXN];

int countPaths(int r, int c) {
    if (r < 0 || c < 0 || grid[r][c] == '*') return 0;
    if (r == 0 && c == 0) return 1;
    if (dp[r][c] != -1) return dp[r][c];
    return dp[r][c] = (countPaths(r-1, c) + countPaths(r, c-1)) % mod;
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    cout << countPaths(n-1, n-1) << endl;
    return 0;
}

//TABULATION METHOD:
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = (grid[0][0] == '.') ? 1 : 0;
    for (int i = 1; i < n; i++) {
        dp[0][i] = (dp[0][i-1] && grid[0][i] == '.') ? 1 : 0;
        dp[i][0] = (dp[i-1][0] && grid[i][0] == '.') ? 1 : 0;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (grid[i][j] == '*') {
                dp[i][j] = 0;
            } else {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;

    return 0;
}

