#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,b,mx,sum=0,c=0;
    cin>>s>>b>>mx;
    for(int i=0;i<s;i++)
    {
        int value;
        cin>>value;
        if(value<=b)
        {
            sum+=value;
        }
        if(sum>mx)
        {
            c++;
            sum=0;
        }
    }
    cout<<c;

}