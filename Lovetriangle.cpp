#include<iostream>// Write your code here
using namespace std;
 
long long dec2bas9(long long n)
{
    if(n<9) return n;
    else return n%9 + 10*dec2bas9(n/9);
}
int main() {
             long long n;
             while(cin>>n)
            cout<<dec2bas9(n)<<"\n";
	return 0;	// Writing output to STDOUT
}
