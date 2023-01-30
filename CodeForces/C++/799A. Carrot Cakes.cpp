#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int g= (n+k-1)/k;
    int t1=0 ,t2=d;
    for(int i=0;i<g;i++)
    {
        if(t1<=t2) t1+=t;
        else t2+=t;
    }

    if(max(t1,t2)<g*t) cout<<"YES";
    else cout<<"NO";

    return 0;

}
