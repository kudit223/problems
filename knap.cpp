#include<bits/stdc++.h>
using namespace std;

void fun(vector<int> wt,vector<int>val,int w,int op)
{
    if(w==0||wt.size()==0)
    {
        cout<<op;
        return;
    }
    if(w<wt[0])
    {
        wt.erase(wt.begin()+0);
        val.erase(val.begin()+0);
        fun(wt,val,w,op);
    }
    else
    {
        int x=op;
        int y=op+val[0];
        int w1=w;
        int w2=w-wt[0];
        wt.erase(wt.begin()+0);
        val.erase(val.begin()+0);
        fun(wt,val,w2,y);
        fun(wt,val,w1,x);
    }
    return;
}

void solve(vector<int> wt,vector<int> val,int w)
{
    int op=0;
    fun(wt,val,w,op);
    return ;
}

int main()
{
    int n,w;
    cin>>n>>w;
    vector<int >wt(n),val(n); 
    for(int i=0;i<n;i++)
    cin>>wt[i]>>val[i];

    solve(wt,val,w);
        return 0;
}
