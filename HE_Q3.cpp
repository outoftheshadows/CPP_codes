#include<bits/stdc++.h>
using namespace std;
#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define ll long long
#define modu 1000000007
#define pb push_back
#define vll vector <long long>
#define f0(i,a) for(i=0;i<a;i++)
#define all(a) a.begin(),a.end()
ll a[1000005];
 void seive(){
	 int maxN=1000000;
	for(ll i=1;i<=maxN;i++)
	a[i]=1;
	a[0]=0,a[1]=0;
	for(ll i=2;i*i<=maxN;i++){
		if(a[i]==1){
			for(ll j=i*i;j<=maxN;j+=i)
			a[j]=0;
		}
	}
	for(ll i=1;i<=maxN;i++){
		a[i]+=a[i-1];
		}
}
int main(){
  fast;
 seive();
 ll t;
 cin>>t;
 while(t--){
	 ll l,r;
	 cin>>l>>r;
	 ll p=max(l,r);
	 ll q=min(l,r);
	 cout<<(a[p]-a[q-1])<<"\n";

 }
 return 0;
}
