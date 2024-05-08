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

#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, int K, vector<int>& sizes, vector<int>& values, int i) {
    if (i == n || K == 0)
        return 0;
    if (sizes[i] > K)
        return knapsack(n, K, sizes, values, i + 1);
    int include = values[i] + knapsack(n, K - sizes[i], sizes, values, i + 1);
    int exclude = knapsack(n, K, sizes, values, i + 1);
    return max(include, exclude);
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> sizes(N), values(N);
    for (int i = 0; i < N; i++)
        cin >> sizes[i];
    for (int i = 0; i < N; i++)
        cin >> values[i];
    int maxValue = knapsack(N, K, sizes, values, 0);
    int leftValue = 0;
    for (int i = 0; i < N; i++)
        leftValue += values[i];
    leftValue -= maxValue;
    cout << maxValue << endl;
    cout << leftValue << endl;
    return 0;
}
