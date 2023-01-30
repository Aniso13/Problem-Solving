#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    if(n==1)
    {
        cout<<s[0];
        return 0;
    }
    int c1=0;
    int c2=0;
    string s2;
    for(int i=0;i<n;i++)
    {
        if(s[i]==s[0])
            c1++;
        else
        {
            c2++;
            s2=s[i];
        }
    }
    if(c1>c2)
        cout<<s[0];
    else
        cout<<s2;

    return 0;
}
