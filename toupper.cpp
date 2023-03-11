#include<bits/stdc++.h>
using namespace std;

void upper(string s,string op)
{
    if(s.size()==0)
    {
        cout<<op;
        return ;

    }
    string op1=op;
    op1.push_back(s[0]);
    string op2=op;
    op2.push_back(toupper(s[0]));
    s.erase(s.begin()+0);
    upper(s,op1);
    upper(s,op2);
    return ;
}

int main()
{
    string s;
    cin>>s;
    string op=" ";
    upper(s,op);
}
