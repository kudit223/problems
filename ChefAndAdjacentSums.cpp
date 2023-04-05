
//https://www.codechef.com/problems/CHFADJSUM
#include <bits/stdc++.h>
using namespace std;
int countt(vector<int>&v,int k,int i)
{
    int c=0;
    while(v[i]==k&&i>-1)
    {
        c++;
        i--;
    }
    return c;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    if(n==2)
	    {
	        cout<<"no"<<'\n';
	        continue;
	    }
	    sort(v.begin(),v.end());
	    bool ans=false;
	    if(v[n-1]==v[n-2])
	    {
	        int co=countt(v,v[n-1],n-1);
	        if(n-co>=co-1)
	        ans=true;
	    }
	    else
	    {
	        int c1=countt(v,v[n-2],n-2);
	        if(n-1-c1>=1)
	        ans=true;
	    }
	    if(ans)
	    cout<<"yes"<<'\n';
	    else
	    cout<<"no"<<'\n';
	    
	}
	return 0;
}
