#include <iostream>
using namespace std;

int main() {
   int n,j,i,k,pos,max,max1;

   while(cin >> n && n){
   int ar[n];
   max = max1 = pos = 0;
   for(i=0;i<n;i++){
   	cin >> ar[i];
   	if(max<ar[i]) max = ar[i];
   }
   for(i=0;i<n;i++){
   	if(max1<ar[i] && ar[i]!=max){
   		max1 = ar[i] ;
   		pos = i;
   	}
   }
   	cout <<pos+1 << endl;
   }
	return 0;
}