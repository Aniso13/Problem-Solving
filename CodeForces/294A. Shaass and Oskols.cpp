#include<bits/stdc++.h>
using namespace std;
int main()
{
    int birds[100];
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
        cin>>birds[i];
    int m;
    cin>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        --x;
 
        if(x!=0)
            birds[x-1]+=y-1;
        if(x!=n-1)
            birds[x+1]+= birds[x]-y;
        birds[x]=0;
    }
    for(int i=0;i<n;i++)
        cout<<birds[i]<<"\n";
    return 0;
}