//find pair in array which sum is equal to [sum] if possible return yes or not return no

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    bool p=true;
    cin>>n>>sum;
    vector<int> v(n);
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    cin>>v[i];
    for(int i=0;i<n;i++)
    {
       if(s.find(sum-v[i])!=s.end())
       {
        cout<<"y";
        p=false;
        break;
       }
       else
       s.insert(v[i]);
    }
    if(p)
    cout<<"no";
    

    

}
