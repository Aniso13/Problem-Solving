#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int moves=0;
    int start=0;
    for(int i=0;i<s.size();i++)
    {
        int idx=s[i]-97;
        int walk= abs(start-idx);

        if(walk<13)
            moves+=walk;
        else
            moves+= 26-walk;
        start=idx;
    }
    cout<<moves;
}
