#include <bits/stdc++.h>

using namespace std;

bool isPossible(vector<int>& people_satisfied, int days, int p) {
    int total_people = 0;
    for (int i = 0; i < days; i++) {
        int food_index = upper_bound(people_satisfied.begin(), people_satisfied.end(), total_people) - people_satisfied.begin();
        if (food_index == 0) return false;
        total_people += people_satisfied[food_index - 1];
    }
    return total_people >= p;
}

int main() {
    int n, p;
    cin >> n >> p;

    vector<int> people_satisfied(n);

    for (int i = 0; i < n; i++) {
        cin >> people_satisfied[i];
    }

    int left = 1, right = n, min_days = n;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (isPossible(people_satisfied, mid, p)) {
            min_days = min(min_days, mid);
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << "Tami will be back after " << min_days << " days" << endl;

    return 0;
}
