#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i;
	cin>>t;
	//cout<<t;
	while(t--)
	{  
             ll d,a,m,b,X;
cin>>d>>a>>m>>b>>X;
double days = (X-d)*(m+1);
days=ceil(days/(m*a+b));
ll day = days;
if((b*((day-1)/(m+1))+a*((day-1)-(day-1)/(m+1)))>=(X-d))
day = day-1;
cout<<day<<endl; 
		
	}
}
