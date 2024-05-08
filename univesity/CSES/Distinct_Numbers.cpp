#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define v vector<ll>
int main()
{
    ll n;
    cin >> n;
    v arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    ll count = 1;
    for (int i = 1; i < n; i++)
    {
            if (arr[i] != arr[i-1])
            {
                count++;
            }
    }
    cout << count<< endl;
}