#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int M = 1e5;
int n, x, cnt, mx;
ll money[M+1];
int main() {
    cin >> n;
    money[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = M-x; j >= 0; j--) {
            if (money[j]) {
                money[j+x] = 1;
            }
        }
    }
    for (int i = 1; i <= M; i++) {
        if (money[i]) {
            mx = i;
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= M; i++) {
        if (money[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
