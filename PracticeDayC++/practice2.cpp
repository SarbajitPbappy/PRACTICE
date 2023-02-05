#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (binary_search(arr.begin(), arr.end(), x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}