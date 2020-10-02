#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findCnt(ll arr[], ll n, ll k) 
{ 
    // Variable to store final answer 
    ll ans = 0; 
  
    // Loop to find prefix-sum 
    for (ll i = 1; i < n; i++) { 
        arr[i] += arr[i - 1]; 
        if (arr[i] > k or arr[i] < -1 * k) 
            ans++; 
    } 
  
    if (arr[0] > k || arr[0] < -1 * k) 
        ans++; 
  
    // Sorting prefix-sum array 
    sort(arr, arr + n); 
  
    // Loop to find upper_bound 
    // for each element 
    for (ll i = 0; i < n; i++) 
        ans += n - (upper_bound(arr, arr + n, arr[i] + k) - arr); 
  
    // Returning final answer 
    return ans; 
} 
int main()
{  ll t,n,k,i,j;
   cin>>t;
   while(t--)
   {
	   cin>>n>>k;
	   ll a[n];
	   for(i=0;i<n;i++)
	   cin>>a[i];
 
	   cout<<findCnt(a,n,k)<<endl;

   }

}
