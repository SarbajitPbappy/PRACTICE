#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5+5;

vector<int> adj[MAXN];
int n, k, sz[MAXN], ans[MAXN];

void dfs(int u, int p) {
    sz[u] = 1;
    for (int v : adj[u]) {
        if (v != p) {
            dfs(v, u);
            sz[u] += sz[v];
        }
    }
}

void solve(int u, int p, int dep, int cnt) {
    if (dep > k) return;
    ans[dep] += cnt;
    for (int v : adj[u]) {
        if (v != p) {
            solve(v, u, dep+1, cnt-sz[v]+n);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    for (k = 1; k <= n; k++) {
        solve(1, 0, 1, n);
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
