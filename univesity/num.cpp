#include <bits/stdc++.h>

using namespace std;

int main() {
	long long int test,i,j;
	long long int y[10000];
	cin>>test;
	for(int k=1;k<=test;k++)
		{
            long long int x, div = 0;
            double sum = 0.0;
            cin>>x;
			for(i=1;i<=x;++i)
				{
				    cin>>y[i];
				    for(j=1;j<=y[i];j++)
					if(y[i]%j==0)
					{
						div++;
					}
                    sum=div/2.75;
				}
				printf("Case %d: %.4lf\n",k,sum);
		}
	return 0;
}