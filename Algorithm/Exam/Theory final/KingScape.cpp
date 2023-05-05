//DFS:

#include<bits/stdc++.h>
using namespace std;
int n,ax,ay,bx,by,cx,cy;
const int N=1005;
bool a[N][N];
int xx[8]={1,1,1,0,0,-1,-1,-1};
int yy[8]={0,-1,1,1,-1,1,0,-1};
void dfs(int x,int y){
    if(x==cx && y==cy){
        cout<<"YES"<<endl;
        exit(0);
    }
    for(int i=0;i<8;i++){
        int n_x=x+xx[i];
        int n_y=y+yy[i];
        if(a[n_x][n_y] || n_x<1 || n_x>n || n_y<1 || n_y>n) 
            continue;
        a[n_x][n_y]=1;
        dfs(n_x,n_y);
    }
    return;
}
int main(){
    cin>>n;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    a[ax][ay]=1;
    for(int i=1;i<=n;i++){
        a[ax][i]=1;
        a[i][ay]=1;
    }
    for(int i=1;i<=n;i++){
        if(ax+i<=n && ay+i<=n)
            a[ax+i][ay+i]=1;
        if(ax-i>=1 && ay-i>=1)
            a[ax-i][ay-i]=1;
    }
    for(int i=1;i<=n;i++){
        if(ax+i<=n && ay-i>=1)
            a[ax+i][ay-i]=1;
        if(ax-i>=1 && ay+i<=n)
            a[ax-i][ay+i]=1;
    }
    a[bx][by]=1;
    dfs(bx,by);
    cout<<"NO"<<endl;
    return 0;
}


//BFS:
#include<bits/stdc++.h>
using namespace std;
int n,ax,ay,bx,by,cx,cy;
const int N=1005;
bool a[N][N];
int xx[8]={1,1,1,0,0,-1,-1,-1};
int yy[8]={0,-1,1,1,-1,1,0,-1};
bool bfs(int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        pair<int,int> curr=q.front();
        q.pop();
        if(curr.first==cx && curr.second==cy)
            return true;
        for(int i=0;i<8;i++){
            int n_x=curr.first+xx[i];
            int n_y=curr.second+yy[i];
            if(a[n_x][n_y] || n_x<1 || n_x>n || n_y<1 || n_y>n) 
                continue;
            a[n_x][n_y]=1;
            q.push({n_x,n_y});
        }
    }
    return false;
}
int main(){
    cin>>n;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    a[ax][ay]=1;
    for(int i=1;i<=n;i++){
        a[ax][i]=1;
        a[i][ay]=1;
    }
    for(int i=1;i<=n;i++){
        if(ax+i<=n && ay+i<=n)
            a[ax+i][ay+i]=1;
        if(ax-i>=1 && ay-i>=1)
            a[ax-i][ay-i]=1;
    }
    for(int i=1;i<=n;i++){
        if(ax+i<=n && ay-i>=1)
            a[ax+i][ay-i]=1;
        if(ax-i>=1 && ay+i<=n)
            a[ax-i][ay+i]=1;
    }
    a[bx][by]=1;
    if(bfs(bx,by))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
