#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,a) for(i=0;i<a;i++)
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  const unsigned int M = 1000000007; 
  int t;
  cin>>t;
  while(t--){
	  ll n;
	  cin>>n;
     ll ans;
	  ans=((n%M)*((n-1)%M))%M;
	  cout<<ans/2<<"\n";
	 }
  return 0;
}
