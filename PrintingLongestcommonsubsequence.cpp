
//Printing Longest common subsequence
#include<bits/stdc++.h>
using namespace std;

string solve(string s1,string s2,int n,int m,vector<vector<string>>&dp)
{
    if(n==0||m==0)
    return "";
    if(dp[n][m]!=" ")
    return dp[n][m];
    if(s1[n-1]==s2[m-1])
    {
        string s=solve(s1,s2,n-1,m-1,dp);
        s.push_back(s1[n-1]);
        return dp[n][m]=s;

    }

    else
    {
        dp[n-1][m]=solve(s1,s2,n-1,m,dp);
        dp[n][m-1]=solve(s1,s2,n,m-1,dp);
        if(dp[n-1][m].size()>dp[n][m-1].size())
        return dp[n-1][m];
        else
        return dp[n][m-1];

    }

}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    vector<vector<string>>dp(n+1,vector<string>(m+1," "));
    string p=solve(s1,s2,n,m,dp);
    cout<<p;

}
