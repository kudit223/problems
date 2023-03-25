//first and last occurrence of element
#include<bits/stdc++.h>
using namespace std;

void first(vector<int> v,int s,int e,int k,int &maxx)
{
    int mid=s+(e-s)/2;
    if(s>e)
    return ;
    if(v[mid]==k)
    maxx=max(maxx,mid);//maxx=min(maxx,mid)
    if(v[mid]>k)                //if(v[mid]>=k)
    first(v,s,mid-1,k,maxx);
    else
    first(v,mid+1,e,k,maxx);

}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int maxx=INT_MIN;//maxx=INT_MAX for first occurrence
    first(v,0,n-1,k,maxx);
    cout<<maxx;
}
