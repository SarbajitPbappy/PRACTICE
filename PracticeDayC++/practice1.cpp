int k=1;
while(k<=n){
	cout<<k<<endl;
	k=k*2;
}
//O(log(n))

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;
//O(n^2)


for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;
//O(n^3)


for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j+i){
   		cout<<i<<j<<endl;
	}
}
//O(n)

for(int i=1;i<=n;i++)
{
	if(builtin_popcount(i) == 1)
	{
		for(int j=1;j<=n;j++)
			cout<<i<<j<<endl;
	}
}
//O(n^2)