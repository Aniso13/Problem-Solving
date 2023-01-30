#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<s;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
            s.erase(s.begin()+i);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++)
    {
        cout<<s[i]<<'+';
    }
    cout<<s[s.size()-1];

}

