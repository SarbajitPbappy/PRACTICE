//MEMORIZATION METHOD:

#define ll long long int
class Solution {
public:
    ll arr[35];
    ll fib(ll n) {
    if(n==0) return 0;
     if(n<=2 && n!=0) return 1;
     if(arr[n]!=0){
         return arr[n];
     }
     arr[n] = fib(n-1)+fib(n-2);
     return arr[n];  
    }
};

//TABULATION METHOD:

#define ll long long int
class Solution {
public:
    ll arr[35];
    ll fib(ll n){
        arr[0]=0;
        arr[1]=1;
        for(ll i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];  
    }
};

