#include<bits/stdc++.h>
using namespace std;


int main()
{

    char c;
    cin>>c;
    string s;
    cin>>s;
    /*L
    zxcvbnm,kjhgfdsaqwertyuio*/
    string h="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(c=='R')
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<h.size();j++)
            {
                if(s[i]==h[j])
                {
                    cout<<h[j-1];
                }
            }
        }
    }
    else if(c=='L')
    {
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<h.size();j++)
            {
                if(s[i]==h[j])
                {
                    cout<<h[j+1];
                }
            }
        }
    }

}