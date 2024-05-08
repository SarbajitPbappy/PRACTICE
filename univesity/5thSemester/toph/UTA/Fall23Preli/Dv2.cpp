#include <bits/stdc++.h>
using namespace std;
int fit(vector<int> w, int n, int c)
{
    int res = 1, bin[n];
    for (int i = 0; i < n; i++)
    {
        int j;
        int min = c + 1, bi = 0;
        for (j = 0; j < res; j++)
        {
            if (bin[j] >= w[i] && bin[j] - w[i] < min)
            {
                bi = j;
                min = bin[j] - w[i];
            }
        }
        if (min == c + 1)
        {
            bin[res] = c - w[i];
            res++;
        }
        else
            bin[bi] -= w[i];
    }
    return res;
}

int main()
{
    int p, x;
    cin >> p >> x;
    vector<int> a(p);
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    int l = 1, r = p, n = p;
    while (l < r)
    {
        int m = (l + r) / 2;
        if (fit(a, p, m) <= x){

            n = min(n, m);
            r = m-1;
        }
        else
            l = m + 1;
    }
    cout << l << endl;
}