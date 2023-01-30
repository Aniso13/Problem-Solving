#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t;
    cin>>t;
    long long ha;
    cin>>ha;
    long long c=0;
    while(t--)
    {
        char s;
        cin>>s;
        long long n;
        cin>>n;
        if(s=='+')
            ha+=n;
        else
        {
            if(ha>=n)
                ha-=n;
            else
                c++;

        }
    }
    cout<<ha<< " "<<c;

}