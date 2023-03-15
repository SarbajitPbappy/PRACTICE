#include <bits/stdc++.h>
using namespace std;
vector<string> Merge_Sort(vector<string> a) {
    if (a.size() <= 1) return a;
    int mid = a.size() / 2;
    vector<string> b;
    vector<string> c;
    for (int i = 0; i < mid; i++) {
        b.push_back(a[i]);
    }
    for (int i = mid; i < a.size(); i++) {
        c.push_back(a[i]);
    }
    vector<string> sorted_b = Merge_Sort(b);
    vector<string> sorted_c = Merge_Sort(c);
    vector<string> sorted_a;
    int index1 = 0;
    int index2 = 0;
    while (index1 < sorted_b.size() && index2 < sorted_c.size()) {
        if (sorted_b[index1] < sorted_c[index2]) {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        } else {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    while (index1 < sorted_b.size()) {
        sorted_a.push_back(sorted_b[index1]);
        index1++;
    }
    while (index2 < sorted_c.size()) {
        sorted_a.push_back(sorted_c[index2]);
        index2++;
    }

    return sorted_a;
}

int main() {
    vector<string> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    vector<string> sorted_arr = Merge_Sort(arr);
    for (string s : sorted_arr) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}

