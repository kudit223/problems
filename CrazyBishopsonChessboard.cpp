//https://www.codechef.com/problems/CRZBISHOP
#include <iostream>
using namespace std;
int solve(int n)
{
    if(n==1||n==2)
    return 0;
    if(n==3)
    return 2;
    n=n-3;
    int p=n/2;
    return (2+2*p+(n-p));
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	    
	}
	return 0;
}
