#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,c;
    cin>>s>>c;
    int n=s.size();
    int m=c.size();
    int i=0,j=0,countt=0;
    while(i!=n)
    {
        if(s[i]!=c[j])
        {
            if(j!=0)
            i=i-j+1;
            else
            i++;
            j=0;
        }
        else
        {
            i++;
            j++;
            if(j==m)
            {
                countt+=1;
                i=i-j+1;
                j=0;
            }
        }
    }
    cout<<countt;
    return 0;

}
