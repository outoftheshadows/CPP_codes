#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,q,k,i,j,sum,ans;
    cin>>n>>q;
    ll a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for (int i = 0; i < n; i++) { 
        a[i] = __builtin_popcount(a[i]); 
    } 
    while(q--)
    {
        cin>>k;
        if(n==1)
        {
            if(a[0]>=k)
              cout<<1<<endl;
            else
            cout<<-1<<endl;
        }
        else
        {
            i=1;
            j=0;
            sum=a[0];
            ans=INT_MAX;
            while(i<n)
            {
                if(a[i]==k)
                {
                    ans=1;
                    break;
                }
                else if(a[j]==k)
                {
                    ans=1;
                    break;
                }
                 else if (sum + a[i] < k) { 
            sum += a[i]; 
            i++; 
        } 
  
        // If sum of number of 1's of 
        // binary representation of elements upto 
        // ith element is greater than k 
        else if (sum + a[i] > k) { 
            ans = min(ans, (i - j) + 1); 
            sum -= a[j]; 
            j++; 
        } 
  
        else if (sum + a[i] == k) { 
            ans = min(ans, (i - j) + 1); 
            sum += a[i]; 
            i++; 
        } 
            }
            if (ans != INT_MAX) 
        cout<<ans<<endl; 
  
    else
        cout<<-1<<endl; 
        }
        



    }
}
