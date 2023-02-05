#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>&arr, int n, int k) 
{ 
    int low = 0, high = n - 1; 
    int mid; 
    while (low <= high) { 
        mid = (low + high) / 2;  
        if (arr[mid] == k) { 
            if (mid > 0 && arr[mid - 1] == k) 
                return true; 
            if (mid < n - 1 && arr[mid + 1] == k) 
                return true; 
            return false; 
        } 
        if (arr[mid] > k) 
            high = mid - 1; 
        else
            low = mid + 1; 
    } 
  
    return false; 
} 
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int k;
    cin >> k;
    if(binarySearch(arr, n, k))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}