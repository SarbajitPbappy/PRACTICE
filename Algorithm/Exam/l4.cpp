#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> adj[n+1];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n+1, INF);
    vector<int> parent(n+1, -1);
    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto it : adj[u]) {
            int v = it.first;
            int w = it.second;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    if (dist[n] == INF) {
        cout << "-1\n";
    } else {
        vector<int> path;
        int node = n;
        while (node != -1) {
            path.push_back(node);
            node = parent[node];
        }
        reverse(path.begin(), path.end());

        for (auto x : path) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}