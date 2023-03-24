#include <bits/stdc++.h>
using namespace std;
const int A = 1005;
int n, m;
int labyrinth[A][A];
int visited[A][A];
int level[A][A];
int parent[A][A];//tracking the directon of path
// direction arrray
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int direction[]={'R','L','U','D'};
pair<int, int> src, dst;
bool is_inside(pair<int, int> cordinate)
{
    int x = cordinate.first, y = cordinate.second;
    if (x >= 0 && x < n && y >= 0 && y < m)
    {
        return true;
    }
    return false;
}
bool is_safe(pair<int, int> coordinate)
{
    int x = coordinate.first, y = coordinate.second;
    if (labyrinth[x][y] == -1)
    {
        return false;
    }
    return true;
}
void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    visited[src.first][src.second] = 1;
    level[src.first][src.second] =0;
    q.push(src);
    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            pair<int, int> adj_node = {new_x, new_y};
            if (is_inside(adj_node) && is_safe(adj_node) && visited[new_x][new_y] == 0)
            {
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                parent[new_x][new_y] =i;
                q.push(adj_node);
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            level[i][j] =-1;
        }
    }
    for (int i = 0; i < n; i++)
    { // doirgho borabor
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        { // prostho borabor
            if (input[j] == '#')
            {
                labyrinth[i][j] = -1; // forbiden nodes
            }
            else if (input[j] == 'A')
            {
                src = {i, j};
            }
            else if (input[j] == 'B')
            {
                dst = {i, j};
            }
        }
    }
    bfs(src);
    if(level[dst.first][dst.second] ==-1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<level[dst.first][dst.second]<<endl;
        vector<char> path;
        int x = dst.first, y = dst.second;
        while(x != src.first || y != src.second){
            int p = parent[x][y];
            path.push_back(direction[p]);
            x -= dx[p];
            y -= dy[p];
        }
        reverse(path.begin(), path.end());
        for(char c : path){
            cout<<c;
        }
        cout<<endl;
    }
}