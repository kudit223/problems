//count an element(k) in sorted array 
#include<bits/stdc++.h>
using namespace std;

int first(vector<int> v,int s,int e,int k,int &result)
{
    int mid=s+(e-s)/2;
    if(s>e)
    return result;
    if(v[mid]==k)
    {
        result++;
        first(v,s,mid-1,k,result);
        first(v,mid+1,e,k,result);
    }
    else if(v[mid]>k)                
    first(v,s,mid-1,k,result);
    else
    first(v,mid+1,e,k,result);

}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int maxx=0;
    first(v,0,n-1,k,maxx);
    cout<<maxx;
}
