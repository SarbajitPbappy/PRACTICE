#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> size(N), value(N);
    for (int i = 0; i < N; ++i) cin >> size[i];
    for (int i = 0; i < N; ++i) cin >> value[i];
    vector<vector<int>> dp(N+1, vector<int>(K+1, 0));
    for (int i = 1; i <= N; ++i) {
        for (int w = 1; w <= K; ++w) {
            dp[i][w] = dp[i-1][w]; 
            if (size[i-1] <= w) 
                dp[i][w] = max(dp[i][w], dp[i-1][w-size[i-1]] + value[i-1]);
        }
    }

    int totalValue = accumulate(value.begin(), value.end(), 0);
    int valueInBox = dp[N][K];
    int valueLeft = totalValue - valueInBox;
    cout << valueInBox << " " << valueLeft << endl;

    return 0;
}
