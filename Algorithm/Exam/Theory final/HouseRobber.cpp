#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& v) {
       int n=v.size();
       if(n==1) return v[0];
       int amnt1[n], amnt2[n];
       amnt1[0] = v[0];
       amnt1[1] = max(v[0], v[1]);
       for(int i=2;i<n-1;i++) {
           amnt1[i] = max(amnt1[i-1], v[i]+amnt1[i-2]);
       }
       amnt2[0] = 0;
       amnt2[1] = v[1];
       for(int i=2;i<n;i++) {
           amnt2[i] = max(amnt2[i-1], v[i]+amnt2[i-2]);
       }
       return max(amnt1[n-2], amnt2[n-1]);
    }
};

int main()
{
    vector<int> nums1 = {2, 3, 2};
    Solution s1;
    cout << s1.rob(nums1) << endl; // expected output: 3

    vector<int> nums2 = {1, 2, 3, 1};
    Solution s2;
    cout << s2.rob(nums2) << endl; // expected output: 4

    vector<int> nums3 = {1, 2, 3};
    Solution s3;
    cout << s3.rob(nums3) << endl; // expected output: 3

    return 0;
}