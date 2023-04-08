#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans = 0;
		for(int i=1;i<=n;++i){
			int tmp;
			cin>>tmp;
			ans ^= tmp;
		}
		if(n%2==0 && ans!=0) puts("-1");
		else cout<<ans<<"\n";
	}
	return 0;
}
