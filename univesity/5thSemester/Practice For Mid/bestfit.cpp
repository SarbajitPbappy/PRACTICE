#include <bits/stdc++.h>
using namespace std;

// Returns number of bins required using best fit
// online algorithm
int bestFit(int weight[], int n, int c)
{
	// Initialize result (Count of bins)
	int res = 0;

	// Create an array to store 
	// remaining space in bins
	// there can be at most n bins
	int bin_rem[n];
	// Create a vector of vectors to store the weights in each bin
	vector<vector<int>> bins;

	// Place items one by one
	for (int i = 0; i < n; i++) {
	
		// Find the best bin that can accommodate
		// weight[i]
		int j;

		// Initialize minimum space left and index
		// of best bin
		int min = c + 1, bi = 0;

		for (j = 0; j < res; j++) {
			if (bin_rem[j] >= weight[i] && bin_rem[j] - 
									weight[i] < min) {
				bi = j;
				min = bin_rem[j] - weight[i];
			}
		}

		// If no bin could accommodate weight[i],
		// create a new bin
		if (min == c + 1) {
			bin_rem[res] = c - weight[i];
			res++;
			// Create a new vector to store weights in this bin
			vector<int> bin;
			bin.push_back(weight[i]);
			bins.push_back(bin);
		}
		else { // Assign the item to best bin
			bin_rem[bi] -= weight[i];
			// Store the weight in the corresponding bin
			bins[bi].push_back(weight[i]);
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
	cout << "Number of bins required in Best Fit : "
		<< bestFit(weight, n, c);
	return 0;
}
