#include<bits/stdc++.h>
using namespace std;
const int MAXN = 3003;
int lcs[MAXN][MAXN];
int n, m;
string s, t;
int LCS(int i, int j) {
    if(i == n || j == m) {
        return 0;
    }
    if(lcs[i][j]!=-1) {
        return lcs[i][j];
    }
    if(s[i] == t[j]) {
        int ans = 1 + LCS(i + 1, j + 1);
        lcs[i][j] = ans;
        return ans;
    }
    int ans = max( LCS(i+1, j), LCS(i, j+1) );
    lcs[i][j] = ans;
    return ans;
}
int main() {
    cin >> s >> t;
    n = s.size();
    m = t.size();
    cout<< LCS(0, 0) << endl;
    return 0;
}
