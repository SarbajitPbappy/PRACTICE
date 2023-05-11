#include <bits/stdc++.h>
using namespace std;

#define c(x) cin >> x;
#define endl "\n"
#define ve vector<vector<int>>

int row, col;
ve mat(1001, vector<int>(1001));
bool vis[1001][1001];

int dfs(int i, int j)
{
    int ans = mat[i][j];
    vis[i][j] = true;

    if (i != 0 && mat[i - 1][j] != 0 && !vis[i - 1][j])
    {
        ans += dfs(i - 1, j);
    }
    if (i != row - 1 && mat[i + 1][j] != 0 && !vis[i + 1][j])
    {
        ans += dfs(i + 1, j);
    }
    if (j != 0 && mat[i][j - 1] != 0 && !vis[i][j - 1])
    {
        ans += dfs(i, j - 1);
    }
    if (j != col - 1 && mat[i][j + 1] != 0 && !vis[i][j + 1])
    {
        ans += dfs(i, j + 1);
    }
    return ans;
}

int main()
{
    int test;
    c(test);
    while (test--)
    {
        c(row);
        c(col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                c(mat[i][j]);
                vis[i][j] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (!vis[i][j] && mat[i][j] != 0)
                {
                    ans = max(ans, dfs(i, j));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
