#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
map<ll, ll> s, v;
ll result(ll x) {
    ll res = 0;
    while (x) x /= 10, res++;
    return res;
}
void bfs() {
    queue<ll> q;
    s[m] = 0, v[m] = 1;
    q.push(m);
    while (q.size()) {
        ll x = q.front();
        q.pop();
        if (result(x) == n) {
            cout << s[x] << endl;
            return;
        }
        for (ll i = x, j = x % 10, y = x * j; i; i /= 10, j = i % 10, y = x * j) {
            if (v[y] != 1) {
                v[y] = 1, s[y] = s[x] + 1;
                q.push(y);
            }
        }
    }
    cout << -1 << endl;
}
int main() {
    cin >> n >> m;
    bfs();
    return 0;
}
