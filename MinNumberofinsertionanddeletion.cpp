#include<bits/stdc++.h>
using namespace std;

int MinNumberofinsertionanddeletion(string a,string b,int n,int m ,vector<vector<int>>&dp)
{
    if(n==0||m==0)
    return 0;
    if(dp[n][m]!=-1)
    return dp[n][m];
    if(a[n-1]==b[m-1])
    return dp[n][m]=1+MinNumberofinsertionanddeletion(a,b,n-1,m-1,dp);
    else
    return dp[n][m]=max(MinNumberofinsertionanddeletion(a,b,n,m-1,dp),MinNumberofinsertionanddeletion(a,b,n-1,m,dp));
}

int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    MinNumberofinsertionanddeletion(a,b,n,m,dp);
    cout<<"numberofdeletion:"<<m-dp[n][m]<<endl;
    cout<<"numberofinsertion:"<<n-dp[n][m];
    
}
