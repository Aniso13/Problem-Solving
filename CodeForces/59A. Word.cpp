#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    string ans="";

    int cU=0;
    int cL=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<'a')
            cU++;
        else
            cL++;
    }

    if(cU>cL)
         for(int i=0;i<s.size();i++)
            ans+=toupper(s[i]);
    else
        for(int i=0;i<s.size();i++)
            ans+=tolower(s[i]);

    cout<<ans;
}
