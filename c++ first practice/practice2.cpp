#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int mul = 1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i%2!=0)
        {
            mul *= arr[i];
        }
    }
    cout << mul << endl;
}