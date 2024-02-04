#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, target;
    cin >> a >> target;
    vector<pair<int, int>> nbr_set(a);
    for (int i = 0; i < a; i++)
    {
        cin >> nbr_set[i].first;
        nbr_set[i].second = i + 1;
    }
    sort(nbr_set.begin(), nbr_set.end());
    int left = 0, right = a - 1;
    while (left < right)
    {
        if (nbr_set[left].first + nbr_set[right].first == target)
        {
            cout << nbr_set[left].second << " " << nbr_set[right].second << "\n";
            return 0;
        }
        if (nbr_set[left].first + nbr_set[right].first < target)
        {
            left++;
        }
        else{
            right--;
        }
    }
    cout << "IMPOSSIBLE"<< "\n";
    return 0;
}