#include <bits/stdc++.h>
using namespace std;
const int A = 1e5 + 5;
int n;
int solve(int n, vector<int> &num)
{
    if (n == 0)
        return 0;
    if (num[n] != -1)
        return num[n];
    int ans = A;
    for (int i = 1; i * i <= n; i++)
    {
        ans = min(ans, solve(n - i * i, num) + 1);
    }
    return num[n] = ans;
}
int main()
{
    cin >> n;
    vector<int> num(n + 1, -1);
    cout << solve(n, num);
    return 0;
}
