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
ll bs(vl a,ll l,ll h,ll x)
{
	while(l<=h)
	{
		ll mid=(l+h)/2;
		if(a[mid]<x)
		{
           l=mid+1;
		}
		if(a[mid]>x)
		{
			h=mid-1;
		}
		if(a[mid]==x)
		{
			return mid;
		}
	}
	return -1;
}
void solve()
 {
    ll n,i;
	cin>>n;
	vl a(n);
	rep0(i,n)
	cin>>a[i];
	sort(a.begin(),a.end());
	ll q;
	cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		cout<<bs(a,0,n-1,x)+1<<endl;
	} 
 }
int main()
{
    fast;
	// ll t;
	// cin>>t;
	// while(t--)
	// {
	   solve();
	//}
}

