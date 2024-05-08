#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int> arr, int key) {
    int low = 0;
    int high = arr.size() - 1; 
    while (low <= high) { 
        int mid = low + (high - low) / 2; 
        if (key == arr[mid]) {
            cout << "Found at index: " << mid << endl; 
            return true;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if (BinarySearch(arr, key)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}
