#include <bits/stdc++.h>
using namespace std;

// Returns number of bins required using first fit
// online algorithm
int firstFit(int weight[], int n, int c)
{
	// Initialize result (Count of bins)
	int res = 0;

	// Create an array to store remaining space in bins
	// there can be at most n bins
	int bin_rem[n];
	// Create a vector of vectors to store the weights in each bin
	vector<vector<int>> bins;

	// Place items one by one
	for (int i = 0; i < n; i++) {
		// Find the first bin that can accommodate
		// weight[i]
		int j;
		for (j = 0; j < res; j++) {
			if (bin_rem[j] >= weight[i]) {
				bin_rem[j] = bin_rem[j] - weight[i];
				// Store the weight in the corresponding bin
				bins[j].push_back(weight[i]);
				break;
			}
		}

		// If no bin could accommodate weight[i]
		if (j == res) {
			bin_rem[res] = c - weight[i];
			// Create a new vector to store weights in this bin
			vector<int> bin;
			bin.push_back(weight[i]);
			bins.push_back(bin);
			res++;
		}
	}

	// Print weights in each bin
	for (int i = 0; i < bins.size(); i++) {
		cout << "Bin " << i + 1 << " : ";
		for (int j = 0; j < bins[i].size(); j++) {
			cout << bins[i][j] << " ";
		}
		cout << endl;
	}

	return res;
}

// Driver program
int main()
{
	int weight[] = { 2, 5, 4, 7, 1, 3, 8 };
	int c = 10;
	int n = sizeof(weight) / sizeof(weight[0]);
	sort(weight, weight + n, greater<int>()); // Sorting the weights in descending order
	cout << "Number of bins required in First Fit Decreasing: "
		<< firstFit(weight, n, c);
	return 0;
}
