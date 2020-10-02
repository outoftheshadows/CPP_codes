#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>
#define f0(i,a) for(i=0;i<a;i++)
int maxN=1000000;
void solve(){
  ll n,q;
   cin>>n>>q;
   ll a[n];
   f0(i,n)
   cin>>a[i];
   while(q--){
    ll x;
    cin>>x;
    ll low=0,high=n-1;
    bool flag=false;
    while(low<=high){
      ll mid=(low+high)/2;
      if(x==a[mid]){
        flag=true;
        break;      }
      else if(x<a[mid])
        high=mid-1;
      else
        low=mid+1;
      }
    
    if(flag)
     cout<<"yes\n";
    else
     cout<<"no\n";
   }
   

}
int main(){
  
 solve();
  
}













