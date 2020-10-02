#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{  ll t,n,k,i,p;
cin>>t;
while(t--)
{
	cin>>n>>k>>p;
	if(p>n-k)
	{cout<<-1<<endl;
	continue;
	}
	ll b[n+1]={0},a[k],c[n-k];
	for(i=0;i<k;i++)
	{
		cin>>a[i];
		ll x=a[i];
		b[x]=-1;

	}
	b[0]=-1;
	ll j=0;
	for(i=0;i<=n;i++)
	{ if(b[i]==0)
      {c[j]=i;
	  j++;
	  }
	}
//    for(i=0;i<n-k;i++)
//     cout<<c[i];
  
  cout<<c[p-1]<<endl;;
   

}

}
