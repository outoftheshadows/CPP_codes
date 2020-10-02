#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i{0};i<n;i++)
	{
		cin>>a[i];
	}
    for(int i{0};i<n-1;i++)
	{
		a[i+1]+=a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
      int p,l,h,mid,ans=-1;
	  cin>>p;
      l=0,h=n-1;
	  while(l<=h)
	  {
		 mid=(l+h)/2;
		  if(a[mid]<p)
		  l=mid+1;
		  else
		  {
			  ans=mid;
			  h=mid-1;
			  }
	  }
	  cout<<ans+1<<endl;
 
	}
 
return 0;
}
