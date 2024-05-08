// #include<bits/stdc++.h>
// using namespace std;

// int coin(vector<int>arr, int amount){
//     int n = arr.size();
//     int count = 0;
//     for(int i=0;i<n;i++){
//         while(amount>=arr[i]){
//             amount-=arr[i];
//             count++;
//         }
//         if(amount==0){
//             break;
//         }
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end(),greater<int>());
//     int amount;
//     cin>>amount;
//     cout<<coin(arr,amount);
//     return 0;
// }

// C++ program to find minimum
// number of denominations
#include <bits/stdc++.h>
using namespace std;

// All denominations of Indian Currency
int denomination[]
	= { 5,10,20,25,50 };
int n = sizeof(denomination) / sizeof(denomination[0]);

void findMin(int V)
{
	sort(denomination, denomination + n);

	// Initialize result
	vector<int> ans;

	// Traverse through all denomination
	for (int i = n - 1; i >= 0; i--) {

		// Find denominations
		while (V >= denomination[i]) {
			V -= denomination[i];
			ans.push_back(denomination[i]);
		}
	}

	// Print result
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

// Driver Code
int main()
{
	int n = 140;
	cout << "Following is minimal"
		<< " number of change for " << n << ": ";

	// Function Call
	findMin(n);
	return 0;
}
