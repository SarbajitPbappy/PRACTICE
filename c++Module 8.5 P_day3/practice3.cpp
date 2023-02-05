#include<bits/stdc++.h>
using namespace std;
int merge_count(int arr[],int n){
    int count=0;
    if(n<=1) return 0;
    int mid=n/2;
    int a[mid],b[n-mid];
    for(int i=0;i<mid;i++){
        a[i]=arr[i];
    }
    for(int i=mid;i<n;i++){
        b[i-mid]=arr[i];
    }
    int sorted_a=merge_count(a,mid);
    int sorted_b=merge_count(b,n-mid);
    int sorted_array[n];
    int indexOf_a=0,indexOf_b=0;
    for(int i=0;i<n;i++){
            if(a[indexOf_a]<b[indexOf_b]){
                sorted_array[i]=a[indexOf_a];
                indexOf_a++;
            }
            else if(indexOf_a==mid){
                sorted_array[i]=b[indexOf_b];
                indexOf_b++;
            }
            else if(indexOf_b==n-mid){
                sorted_array[i]=a[indexOf_a];
                indexOf_a++;
            }
            else{
                sorted_array[i]=b[indexOf_b];
                indexOf_b++;
            }
        count++;
    }
    return count + sorted_a + sorted_b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
    int ans=merge_count(arr,n);
    cout<<ans/2<<endl;
    return 0;
}