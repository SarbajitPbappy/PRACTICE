#include<bits/stdc++.h>
using namespace std;

int coinChangeMin(int coins[], int n, int amount) {
    int dp[amount + 1];
    // Initialize the dp array to a value greater than any possible number of coins
    for(int i = 1; i <= amount; i++) dp[i] = amount + 1;
    dp[0] = 0; // No coins are needed to make up 0 amount

    for(int i = 0; i < n; i++) {
        for(int j = coins[i]; j <= amount; j++) {
            // If coins[i] is less than the amount
            dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
        }
    }

    // Check if it's possible to make up the amount
    if(dp[amount] > amount) return -1; // Not possible to make up the amount
    return dp[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int n = sizeof(coins)/sizeof(coins[0]);
    int amount = 11;
    cout << coinChangeMin(coins, n, amount) << endl;
    return 0;
}
