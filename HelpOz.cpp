#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int m;
    cin>>m;
    ll a[m],i;
    for(i=0;i<m;i++)
    cin>>a[i];
    sort(a,a+m);
    ll d=a[m-1]-a[0];
    //cout<<d;
    vector <ll> v;
    for(i=1;i*i<=d;i++)
    {
        if(d%i==0)
        {
            v.push_back(i);
            if (i != d/i) 
                v.push_back(d/i);
        }
    }
    sort(v.begin(),v.end());
    // for(i=0;i<v.size();i++)
    // cout<<v[i];
    for (i=0; i<v.size(); i++) 
    { 
        ll temp = a[0]%v[i]; 
  
        // checking for each array element if 
        // its modulus with k is equal to k or not 
        ll j; 
        for (j=1; j<m; j++) 
            if (a[j] % v[i] != temp) 
                break; 
  
       if (j == m && v[i]!=1) 
            cout << v[i] <<" "; 
    } 
    
}
