#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,countt=0;
	    cin>>n;
	    vector<int>a(n);
	    vector<int> b(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    for(int i=0;i<n;i++)
	    {
	        
	        if(a[i]>2*b[i])
	        continue;
	        else if(b[i]>2*a[i])
	        continue;
	        else 
	        countt++;
	    }
	    cout<<countt<<'\n';
	}
	return 0;
}
