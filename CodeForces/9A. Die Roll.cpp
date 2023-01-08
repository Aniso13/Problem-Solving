#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   int mx=max(a,b);
   mx=6-mx+1;
   if(mx==1)
        cout<<"1/6";
   else if(mx==2)
        cout<<"1/3";
   else if(mx==3)
        cout<<"1/2";
    else if(mx==4)
        cout<<"2/3";
    else if(mx==5)
        cout<<"5/6";
    else if(mx==6)
        cout<<"1/1";

}