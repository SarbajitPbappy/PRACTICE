#include <stdio.h> 
#include <limits.h> 
  
// Function to find maximum and minimum product 
// and maximum and minimum sum of two elements 
// of given array 
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int min(int x,int y){
    if(x>y) return y;
    else return x;
}
void findMaxMinProductSum(int arr[], int n) 
{ 
    int max_prod = INT_MIN; 
    int min_prod = INT_MAX; 
    int max_sum = INT_MIN; 
    int min_sum = INT_MAX; 
  
    // Consider every pair and update max_prod, 
    // min_prod, max_sum and min_sum 
    for (int i = 0; i < n; i++) { 
        for (int j = i; j < n; j++) { 
            int prod = arr[i] * arr[j]; 
            int sum = arr[i] + arr[j]; 
  
            // Update max_prod, min_prod, max_sum 
            // and min_sum 
            max_prod = max(max_prod, prod); 
            min_prod = min(min_prod, prod); 
            max_sum = max(max_sum, sum); 
            min_sum = min(min_sum, sum); 
        } 
    }
    printf("%d %d %d %d\n",max_prod,min_prod,max_sum,min_sum);
} 
  
// Driver program 
int main() 
{ 
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        findMaxMinProductSum(arr, n);
    }
    return 0; 
}