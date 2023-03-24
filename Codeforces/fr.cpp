#include <bits/stdc++.h>
using namespace std;

bool checkString(string s)
{
    int len = s.length();
    int first = s.size() + 1;
    for (int i = 0; i < len; i++) {
        if (s[i] == '1') {
            first = i;
            break;
        }
    }
    int last = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1') {
            last = i;
            break;
        }
    }
    for (int i = first; i <= last; i++)
        if (s[i] == '0')
            return false;
 
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0;i<n;i++) {
            if(s[i] == 'c' || s[i] == 'b') {
                s.replace(i,1,"1");
            } else {
                s[i] = '0';
            }
        }
        if(checkString(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
