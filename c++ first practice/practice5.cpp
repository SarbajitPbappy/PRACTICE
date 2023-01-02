#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A;
    vector<int> set_a(A);
    for (int i = 0; i < A; i++)
    {
        cin >> set_a[i];
    }
    cin >> B;
    vector<int> set_b(B);
    for (int i = 0; i < B; i++)
    {
        cin >> set_b[i];
    }
    sort(set_a.begin(), set_a.end());
    sort(set_b.begin(), set_b.end());
    vector<int> union_s;
    for(int i = 0; i < A; i++){
        union_s.push_back(set_a[i]);
    }
    for(int i = 0; i < B; i++){
        if(find(union_s.begin(), union_s.end(),set_b[i])==union_s.end()){
            union_s.push_back(set_b[i]);
        }
    }
    sort(union_s.begin(), union_s.end()); 
    for (int i = 0; i < union_s.size(); i++)
    {
        cout << union_s[i] << " ";
    }
}