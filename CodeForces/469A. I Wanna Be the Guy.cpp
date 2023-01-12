#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n ;
    cin>>n;
    int fr[n+1]={0};
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int a;
        cin>>a;
        fr[a]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        fr[a]++;
    }

    for(int i=1;i<n+1;i++)
    {
        if(fr[i]==0)
        {
            cout<< "Oh, my keyboard!";
            return 0;
        }

    }
    cout<< "I become the guy.";
    return 0;
}

