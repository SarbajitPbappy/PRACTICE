#include <bits/stdc++.h>
using namespace std; 
/*
Time Complexity=O(n^2)
Memory Complexity=O(n)
*/
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // i=0 ---> vitorer loop "n-1" bar coltece //orthat 1 to n-1 bar vitorer loop
    // i=1 ---> vitorer loop "n-2" bar coltece //orthat 2 to n-2 bar vitorer loop
    // i=2 ---> vitorer loop "n-3" bar coltece
    // i=3 ---> vitorer loop "n-4" bar coltece
    // i=n ---> vitorer loop "0" bar coltece
    // orthat loop coltece n*n times./ n^2.
    // (n-1)+(n-2)+(n-3)+......+2+1+0= (n*(n-1))/2=== (n^2-n)/2== (n^2/2)-(n/2)
    for (int i = 0; i < n; i++)
    {
        string ans = "No\n";
        for (int j = i+1; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
            {
                ans = "Yes\n";
            }
        }
        cout << "i= " << i << ", " << ans;
    }
}