#include <bits/stdc++.h>
using namespace std;
const int M = 2e4 + 5;
#define pb push_back
vector<int> adj_node[M];
int vis[M];

void bfs(int src, int& vm, int& ly) {
    queue<int> q;
    vis[src] = 1;
    vm++;
    q.push(src);
    while (!q.empty()) {
        int head = q.front();
        q.pop();
        for (int i = 0; i < adj_node[head].size(); i++) {
            int adj = adj_node[head][i];
            if (vis[adj] == 0) {
                q.push(adj);
                if (vis[head] == 1) {
                    vis[adj] = 2;
                    ly++;
                } else {
                    vis[adj] = 1;
                    vm++;
                }
            }
        }
    }
}

int main() {
    int test;
    cin >> test;
    for (int t = 1; t <= test; t++) {
        for (int i = 0; i < M; i++) {
            adj_node[i].clear();
            vis[i] = 0;
        }
        int n;
        cin >> n;
        while (n--) {
            int u, v;
            cin >> u >> v;
            adj_node[u].pb(v);
            adj_node[v].pb(u);
        }
        int ans = 0;
        for (int i = 0; i < M; i++) {
            if (!adj_node[i].empty() && vis[i] == 0) {
                int vm = 0, ly = 0;
                bfs(i, vm, ly);
                ans += max(vm, ly);
            }
        }
        cout << "Case " << t << ": " << ans << endl;
    }
    return 0;
}
