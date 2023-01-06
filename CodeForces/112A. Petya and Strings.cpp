#include <bits/stdc++.h>
using namespace std;


int main()
{
    string a,b,aa="",bb="";
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        aa+=toupper(a[i]);
        bb+=toupper(b[i]);
    }
    if(aa>bb)
        cout<<"1";
    else if(aa<bb)
        cout<<"-1";
    else
        cout<<"0";
}
