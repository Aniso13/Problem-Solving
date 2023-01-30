#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int res;
    if(n<4)
    {
        
        if(n==1)
            res=8;
        else if(n==2)
            res=4;
        else if(n==3)
            res=2;
        else if(n==0)
            res=1;
    }
    else
    {
        int ret=n%4;
        if(ret==0)
            res=6;
        else if(ret==3)
            res=2;
        else if(ret==2)
            res=4;
        else if(ret==1)
            res=8;
    }
 
cout<<res;
}