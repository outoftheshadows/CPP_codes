#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
 
 
int main()
{
	int t,i;
	cin>>t;
	long long n,m,minx,maxx,j;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		maxx=1;
		minx=1;
		m=(n-1)/2;
		minx=(m*m)%mod;
		minx=(minx*n)%mod;
		maxx=(n*(n-1))%mod;
		maxx=(maxx*(2*n-1))%mod;
		maxx=(maxx*166666668)%mod;
		cout<<minx<<" "<<maxx<<'\n';
	}
}
