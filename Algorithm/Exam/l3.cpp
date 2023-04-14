#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e18; 
const int N=1e3+5;
ll dist[N][N];
int main() {
    int n, m, q;
    cin >> n >> m >> q;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            dist[i][j]=INF;
        }
    }
    for (int i = 1; i <= n; i++) {
        dist[i][i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        long long  c;
        cin >> a >> b >> c;
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if (dist[a][b] == INF) {
            cout << "-1\n";
        } else {
            cout << dist[a][b] << "\n";
        }
    }

    return 0;
}