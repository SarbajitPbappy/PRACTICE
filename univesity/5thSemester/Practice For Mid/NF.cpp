#include <iostream>
#include <vector>

using namespace std;

// Returns bins required using next fit online algorithm
vector<vector<int>> nextFit(int weight[], int n, int c) {
    // Initialize result (Count of bins) and remaining capacity in current bin.
    int res = 0, bin_rem = c;
    vector<vector<int>> bins(1); // Initialize bins with one empty vector

    // Place items one by one
    for (int i = 0; i < n; i++) {
        // If this item can't fit in current bin
        if (weight[i] > bin_rem) {
            res++; // Use a new bin
            bin_rem = c - weight[i];
            vector<int> bin;
            bin.push_back(weight[i]);
            bins.push_back(bin); // Add a new bin
        } else {
            bin_rem -= weight[i];
            bins[res].push_back(weight[i]); // Add item to the current bin
        }
    }

    return bins;
}

// Driver program
int main() {
    int weight[] = { 2, 5, 4, 7, 1, 3, 8 };
    int c = 10;
    int n = sizeof(weight) / sizeof(weight[0]);

    vector<vector<int>> bins = nextFit(weight, n, c);

    cout << "Number of bins required in Next Fit : " << bins.size() << endl;

    // Print weights in each bin
    for (int i = 0; i < bins.size(); i++) {
        cout << "Bin " << i + 1 << " : ";
        for (int j = 0; j < bins[i].size(); j++) {
            cout << bins[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}