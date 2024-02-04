#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    vector<int> v(x);

    for (int i = 0; i < x; i++) {
        cin >> v[i];
    }

    bool found = false;

    for (int i = 0; i < x; i++) {
        if (v[i] == y) {
            cout << "Senti Aunti Ramva will never be mine" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Senti Aunti Ramva is mine" << endl;
    }

    return 0;
}
