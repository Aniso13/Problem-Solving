#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    int temp =a;
    int c=1;

    while(true)
    {
        if((a%10)-b==0 or a%10==0)
        {
            cout<<c;
            return 0;
        }
        c++;
        a=temp*c;

    }

    }