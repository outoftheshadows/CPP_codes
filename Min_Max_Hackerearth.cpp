#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n,i;
   cin>>n;
   ll a[n],sum=0;

   for(i=0;i<n;i++)
   cin>>a[i];

   sort(a,a+n);

   for(i=0;i<n;i++)
   {sum+=a[i];
   }
   cout<<sum-a[n-1]<<" "<<sum-a[0];

}
