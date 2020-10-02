
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int n,i;
  cin>>n;
  int a[n];
  f0(i,n)
  cin>>a[i];
  sort(a,a+n);
  ll d=a[n-1]-a[0];
  vector<ll> v;
  for(int i=2;i*i<=d;i++){
	  if(d%i==0){
		  v.pb(i);
		  if(i!=d/i)
		  v.pb(d/i);
	  }
  } 
  v.pb(d); 
  vector<ll> ans;
  for(int i=0;i<v.size();i++){
   ll temp=a[0]%v[i];
   int j;
   for(int j=1;j<n;j++){
      if(a[j]%v[i]!=temp)
	  break;
	  if(j==n-1)
   ans.pb(v[i]);
   } 
 }
  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++)
  cout<<ans[i]<<" ";
  return 0;
}
