
#include<bits/stdc++.h>
using namespace std;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,i,j,x;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	sort(a,a+n);
	
	if(n==1||n==2||n==3)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	int s1,s2,c=-1;
	for(i=1;i<n;i++)
	{  x=a[i];
     s1=0;
	 s2=0;
	 
	 for(j=0;j<i;j++)
	 {   if(a[j]!=x)
		 s1+=a[j];
		 else
		 break;
	 }
	 for(j=i+1;j<n;j++)
	 {
		 if(a[j]!=x)
		 s2+=a[j];
	 }
	 if(s1==s2 && s1!=0)
	 {cout<<"YES"<<endl;
	 c=1;
	 break;
	 }
	}
	if(c==-1)
	{
		cout<<"NO"<<endl;
	}
}
