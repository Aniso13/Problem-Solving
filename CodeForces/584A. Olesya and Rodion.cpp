#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n , t;
    cin>>n>>t;
    string s= "";
    if(n==1)
    {
        if(t==10)
        {
            cout<<-1;
        }
        else
            cout<<t;
        return 0;
    }

    if(t==10)
    {
        for(int i=1;i<n;i++)
            s+="1";
        s+=to_string(0);
    }
    else
    {
         for(int i=1;i<=n;i++)
            s+=to_string(t);
    }

    cout<<s;
    return 0;
}
