#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

int N, M;
char grid[MAXN][MAXN];
bool vis[MAXN][MAXN];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int room_count = 0, longest_room = 0;

void dfs(int x, int y, int &floor_count) {
    vis[x][y] = true;
    floor_count++;
    for(int k = 0; k < 4; k++) {
        int nx = x + dx[k], ny = y + dy[k];
        if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if(vis[nx][ny] || grid[nx][ny] == '#') continue;
        dfs(nx, ny, floor_count);
    }
}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(!vis[i][j] && grid[i][j] == '.') {
                int floor_count = 0;
                dfs(i, j, floor_count);
                room_count++;
                longest_room = max(longest_room, floor_count);
            }
        }
    }
    cout << "Rooms - " << room_count << endl;
    cout << "Length of the longest room - " << longest_room << endl;
    return 0;
}