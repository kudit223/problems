//https://www.codechef.com/problems/STRAME?tab=statement
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	     cin>>n>>s;
	     int c1=0,c0=0;
	     for(int i=0;i<n;i++)
	     {
	         if(s[i]=='0')
	         c0++;
	         else
	         c1++;
	     }
	     if(c1==n||c0==n)
	     cout<<"Ramos\n";
	     else
	     {
	         if(min(c1,c0)%2==0)
	         cout<<"Ramos\n";
	         else
	         cout<<"Zlatan\n";
	         
	     }
	}
	return 0;
}
