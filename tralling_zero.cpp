#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,i=1,a=0;
	cin>>n;
    while(n>=pow(5,i))
    {
        a+=n/pow(5,i);
        i++;
    }
	cout<<a;
	return 0;
}
