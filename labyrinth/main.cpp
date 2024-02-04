#include <bits/stdc++.h>
using namespace std;

const int A = 1005;
const int WALL = -1;

struct State {
    bool visited;
    int level;
    int parent;
};

int n, m;
int labyrinth[A][A];
State state[A][A];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
char direction[] = {'R', 'L', 'U', 'D'};

bool is_inside(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

bool is_safe(int x, int y) {
    return (labyrinth[x][y] != WALL && !state[x][y].visited);
}

void bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    state[sx][sy].visited = true;
    state[sx][sy].level = 0;
    q.push({sx, sy});

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (is_inside(nx, ny) && is_safe(nx, ny)) {
                state[nx][ny].visited = true;
                state[nx][ny].level = state[x][y].level + 1;
                state[nx][ny].parent = i;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    pair<int, int> src;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c; cin >> c;
            if (c == '.') {
                labyrinth[i][j] = 0;
            } else if (c == '#') {
                labyrinth[i][j] = WALL;
            } else if (c == 'A') {
                src = {i, j};
            }
        }
    }

    bfs(src.first, src.second);

    pair<int, int> dst;
    bool found_dst = false;
    for (int i = 0; i < n && !found_dst; i++) {
        for (int j = 0; j < m && !found_dst; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                if (state[i][j].visited) {
                    found_dst = true;
                    dst = {i, j};
                }
            }
        }
    }

    if (!found_dst) {
        cout << "NO\n";
    } else {
        cout << "YES\n"<<state<<endl;
    }
}
