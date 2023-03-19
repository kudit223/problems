#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

   int tt;
   cin>>tt;
   while(tt--)
   {
    cout<<"\n";
    int x,y,n,r;
    cin>>x>>y>>n>>r;
    if(n>r/x)
    { 
        cout<<"-1";
        continue;

    }
    if(n<=r/y)
    {
        cout<<"0"<<" "<<n;
        continue;

    }
   

    int s=r/y;
    vector<int> dp(s);
    for(int i=0;i<=s;i++)
    {
        
        dp[i]=i+(r-(i*y))/x;
        if(n<=dp[i])
        {
            
            continue;
        }
        else
        {
        cout<<n-i+1<<" "<<i-1;
        break;
        }
    }
    
    
   }
return 0;
}
