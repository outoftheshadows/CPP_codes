#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//print with endl
template <typename Arg1>
void pf(Arg1&& arg1)
{ cout<<arg1<<"\n";}
template <typename Arg1, typename... Args>
void pf(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<"\n"; pf(args...); }

//print with space
template <typename Arg1>
void ps(Arg1&& arg1)
{ cout<<arg1<<" ";}
template <typename Arg1, typename... Args>
void ps(Arg1&& arg1, Args&&... args)
{ cout<<arg1<<" "; ps(args...); }

//printing via for loop
template <typename Arg1>
void pvs(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)ps(arg1[i]); }
template <typename Arg1>
void pvn(Arg1&& arg1, ll n)
{ for(ll i=0;i<n;i++)ps(arg1[i]); }



ll lcm(ll a,ll b) 
{ return (a*b)/__gcd(a,b); }


#define fast  ios::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);
#define MOD 1000000007 
#define MAX 1e9
#define MIN -1e9
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define repr(i,n) for(i=n-1;i>=0;i--)
#define pb push_back
#define mp make_pair 
#define all(a) a.begin(),a.end()
#define vl vector<ll>
#define vll vector<vl>
#define vs vector<string>
#define pl pair<ll,ll>
#define vpl vector<pl>
#define f first
#define s second
#define um unordered_map


void solve()
 {
    ll n,i;
    cin>>n;
    vl a(n);
    rep0(i,n)
    cin>>a[i];
    
    vl b(n);
    rep0(i,n)
    b[i]=a[i];
    
    // for(i=0;i<n;i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    sort(b.begin(),b.end());
    // for(i=0;i<n;i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    ll c=0;
    rep0(i,n)
    {
        if(a[i]==b[i])
        c++;
    }
    if(c==n)
    {
        cout<<"YES\n";
        return ;
    }
    unordered_map<ll,ll> mp;
    rep0(i,n)
    mp[a[i]]++;
    bool ok=false;
    for(auto x:mp)
    {
        if(x.second>1)
        ok=true;
    }
    if(ok==true)
    {
       cout<<"YES\n";
        return ; 
    }
    sort(b.begin(),b.end(),greater<ll>());
    
    // for(i=0;i<n;i++)
    // cout<<b[i]<<" ";
    // cout<<endl;
    
    c=0;
    rep0(i,n)
    {
        if(a[i]==b[i])
        c++;
    }
    if(c==n)
    {
        cout<<"NO\n";
        return ;
    }
    
    cout<<"YES\n";
 }
int main()
{
    fast;
	ll t;
	cin>>t;
	while(t--)
	{
	   solve();
	}
}

